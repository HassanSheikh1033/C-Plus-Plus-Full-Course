#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
// Constructor to initialize rectangle dimensions
//    Rectangle(int len, int wid)  {
//        length = len;
//        width = wid;
//    }

		Rectangle(){
		 length = 0;
          width = 0;
		} 	

// Member function to calculate the area of the rectangle
//    int calculateArea() {
//        return length * width;
//    }
		void get(){
			cout<<"Enter the value of length: "<<endl;
			cin>>length;
			cout<<"Enter the value of width: "<<endl;
			cin>>width;
		}
		
		void calculateArea(){
			cout<< length * width;
		} 

// Member function to calculate the perimeter of the rectangle
//    int calculatePerimeter(){
//        return 2 * (length + width);
//    }
        void calculatePerimeter(){
			cout<< 2 * (length + width);
		}



    // Destructor to display a message when a Rectangle object is destroyed
    ~Rectangle() {
        cout << "Rectangle object with length  and width is being destroyed." << endl;
    }
    
};




int main() {
    // Create a Rectangle object with length 5 units and width 4 units
//    Rectangle myRectangle(5, 4);
    Rectangle r;
    r.get();
    r.calculateArea();
    r.calculatePerimeter();

    // Calculate and display the area of the rectangle
//    cout << "Area: " << myRectangle.calculateArea() << endl;

    // Calculate and display the perimeter of the rectangle
//    cout << "Perimeter: " << myRectangle.calculatePerimeter() << endl;


    return 0;
}




