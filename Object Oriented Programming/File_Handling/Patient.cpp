#include<iostream>
#include<fstream>
using namespace std;


class Patient{
    private:
        int Patient_Id;
        char name[20];
        int age;
        char medicalHistory[20];
    public:
        void get(){
            cout<<"Enter the Patient_ID: "<<endl;
            cin>>Patient_Id;
            cout<<"Enter the name of Patient: "<<endl;
            cin>>name;
            cout<<"Enter the age: "<<endl;
            cin>>age;
            cout<<"Enter the Medical History: "<<endl;
            cin>>medicalHistory;
        }


        void show(){
            cout<<"Patient Id is: "<<Patient_Id<<endl;
            cout<<"Patient Name is: "<<name<<endl;
            cout<<"Age of Patient is: "<<age<<endl;
            cout<<"Medical History of Patient is: "<<medicalHistory<<endl;
        }



        void save(){
            ofstream outfile("Vehicle.txt");
            outfile<<Patient_Id<<endl;
            outfile<<name<<endl;
            outfile<<age<<endl;
            outfile<<medicalHistory<<endl;
        }


        void read(){
           const int Max = 80;
           char buffer[Max];
           int count = 1;

           ifstream infile("Vehicle.txt");
           while(!infile.eof()){  
           infile.getline(buffer,Max);
           cout<<buffer <<endl;
           }
        }
};




int main(){
    Patient v1;
    v1.get();
    v1.show();
    v1.save();
	v1.read();


    return 0;
}







