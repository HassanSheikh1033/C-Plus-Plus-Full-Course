#include<iostream>
using namespace std;

class Teacher{
    private:
        string name;
        int age;
        int salary;
        string subject;
    public:
        void getData(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter salary: ";
            cin>>salary;
            cout<<"Enter subject: ";
            cin>>subject;
        }    
        void displayData(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Subject: "<<subject<<endl;
        }
};


class Teacher_IT: public Teacher{
    private:
        string department;
    public:
        void getData(){
            Teacher::getData();
            cout<<"Enter department: ";
            cin>>department;
        }
        void displayData(){
            Teacher::displayData();
            cout<<"Department: "<<department<<endl;
        }
};


class Teacher_Math: public Teacher{
    private:
        string department;
    public:
        void getData(){
            Teacher::getData();
            cout<<"Enter department: ";
            cin>>department;
        }
        void displayData(){
            Teacher::displayData();
            cout<<"Department: "<<department<<endl;
        }
};




int main(){
    Teacher_IT t;
    Teacher_Math t1;
    t.getData();
    t.displayData();
    t1.getData();
    t1.displayData();

    return 0;
}








