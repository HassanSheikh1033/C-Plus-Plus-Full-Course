#include<iostream>
using namespace std;

class Doctor{
    private:
        int id;
        string name;
        string specialization;
        int experience;
        int fees;
        int no_of_patients;
    public:
     void getData(){
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the specialization: ";
        cin>>specialization;
        cout<<"Enter the experience: ";
        cin>>experience;
        cout<<"Enter the fees: ";
        cin>>fees;
        cout<<"Enter the no of patients: ";
        cin>>no_of_patients;
     }    
     void displayData(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Experience: "<<experience<<endl;
        cout<<"Fees: "<<fees<<endl;
        cout<<"No of patients: "<<no_of_patients<<endl;
     }
};

class Surgeon : public Doctor{
    private:
        string surgery_area;
    public:
        void getData(){
            Doctor::getData();
            cout<<"Enter the surgery area: ";
            cin>>surgery_area;
        }
        void displayData(){
            Doctor::displayData();
            cout<<"Surgery area: "<<surgery_area<<endl;
        }
};



int main(){
    Surgeon * ptr = new Surgeon;
    ptr.getData();
    ptr.displayData();

    return 0;
}