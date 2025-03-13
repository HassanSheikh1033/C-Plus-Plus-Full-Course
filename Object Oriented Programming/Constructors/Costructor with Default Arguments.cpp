#include <iostream>
using namespace std;


class Person{
	private:
    // variable Declaration
     int age;
     string name;  
     int Phone_no;
     
    public:
		void get(){   // Function_name name;
			cout<<"Enter age"<<endl;
			cin>>age;
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter phone no"<<endl;
			cin>>Phone_no;	
		}
		
		void show(){
			cout<<age<<endl;
			cout<<name<<endl;
			cout<<Phone_no<<endl;	
		}
		
       // Default Constructor:
	   Person(){
	   		cout<<"Hello"<<endl;
			  // When objects are created then constructor called automatically....  4Object = 4call...		
	   }		
	   
       // Constructor with Parameters.......	   
		
};



int main(){
	 Person p,p1,p2,p3;
     //	 p.age	---- Private data does not acess outside the class--------	 
	 p.get();
	 p.show();
	 Person p4;
	 		
    
    return 0;
}




