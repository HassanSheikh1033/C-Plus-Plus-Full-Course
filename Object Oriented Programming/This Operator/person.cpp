#include <iostream>
using namespace std;


class Person
{
    private:
        char name[20];
        int age;
        char address[20];
  public:
    void get(){
        cout<<"Enter name:"<<endl;
        cin>>this->name;
        cout<<"Enter age"<<endl;
        cin>>this->age;
        cout<<"Enter address"<<endl;
        cin>>this->address;   
    }
    void show(){
        cout<<"Your name:"<<this->name;
        cout<<"your age"<<this->age;
        cout<<"Your address"<<this->address; 
    }
};


int main(){
    Person p;
    p.get();
    p.show();

    return 0;
}




