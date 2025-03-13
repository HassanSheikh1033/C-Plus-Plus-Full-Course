#include <iostream>
using namespace std;

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    void display() const {
        cout << "Vector: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    Vector3D sum = v1 + v2;
    sum.display();

    Vector3D diff = v1 - v2;
    diff.display();

    Vector3D product = v1 * 2;
    product.display();

    return 0;
}