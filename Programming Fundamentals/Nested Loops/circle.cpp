#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    for (int i = -radius; i <= radius; ++i) {
        for (int j = -radius; j <= radius; ++j) {
            if (sqrt(i * i + j * j) <= radius) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    

    return 0;
}
