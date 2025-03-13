#include <iostream>
using namespace std;


class Shape {
public:
    virtual void render() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void render() override {
        cout << "Rendering a circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void render() override {
        cout << "Rendering a rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void render() override {
        cout << "Rendering a triangle" << endl;
    }
};


int main() {
    Shape* shapes[] = {new Circle(), new Rectangle(), new Triangle()};
    for (int i = 0; i< 3; ++i) {
        shapes[i]->render();
    }
    
    
    return 0;
}








