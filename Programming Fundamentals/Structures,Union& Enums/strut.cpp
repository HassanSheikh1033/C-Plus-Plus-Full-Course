#include<iostream>
using namespace std;


struct student {
    char name[20];
    int rollno;
    char clas[5];

    void get(){
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter your class:"<<endl;
        cin>>clas;
    }
    void show(){
    	cout<<"Information of Student data is : "<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<clas<<endl;
    }
};


int main(){
    student s1;
    s1.get();
    s1.show();
    
    return 0;
}



