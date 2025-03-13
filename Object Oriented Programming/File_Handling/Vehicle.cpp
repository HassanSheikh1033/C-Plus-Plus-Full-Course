#include<iostream>
#include<fstream>
using namespace std;


class Vehicle{
    private:
        int Vehicle_Id;
        char make[20];
        char model[20];
        char date[20];
    public:
        void get(){
            cout<<"Enter the Vehicle_ID: "<<endl;
            cin>>Vehicle_Id;
            cout<<"Enter Who make the Vehicle: "<<endl;
            cin>>make;
            cout<<"Enter the model: "<<endl;
            cin>>model;
            cout<<"Enter the date: "<<endl;
            cin>>date;
        }

        void show(){
            cout<<"Vehicle Id is: "<<Vehicle_Id<<endl;
            cout<<"Vehicle is maked by: "<<make<<endl;
            cout<<"Service Date of Vehicle is: "<<date<<endl;
            cout<<"Model of Vehcile is: "<<model<<endl;
        }


        void save(){
            ofstream outfile("Vehicle.txt");
            outfile<<Vehicle_Id<<endl;
            outfile<<make<<endl;
            outfile<<date<<endl;
            outfile<<model<<endl;
        }


        void read(){
           const int Max = 80;
           char buffer[Max];
           int count = 1;

           ifstream infile("Vehicle.txt");
           while(!infile.eof()){  
           infile.getline(buffer,Max);
           cout<<"Line:"<<count++<<" ";
           cout<<buffer <<endl;
           }
        }
};



int main(){
   Vehicle v1;
    v1.get();
    v1.show();
    v1.save();
	v1.read();


    return 0;
}






