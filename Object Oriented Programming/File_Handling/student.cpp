#include<iostream>
#include<fstream>
using namespace std;


class Student{
    private:
        char name[];
        char fname[];
        int age;
        char address[];
    public:
        void get(){
            cout<<"Enter the name: "<<endl;
            cin>>name;
            cout<<"Enter the father name: "<<endl;
            cin>>fname;
            cout<<"Enter the age: "<<endl;
            cin>>age;
            cout<<"Enter the address: "<<endl;
            cin>>address;
        }

        void show(){
            cout<<"Your name is: "<<name<<endl;
            cout<<"Your father name is: "<<fname<<endl;
            cout<<"Your age is: "<<age<<endl;
            cout<<"Your address is: "<<address<<endl;
        }


        void save(){
            ofstream outfile("gdata.txt");
            outfile<<name<<endl;
            outfile<<fname<<endl;
            outfile<<age<<endl;
            outfile<<address<<endl;
        }


        void read(){
           const int Max = 80;
           char buffer[Max];
           int count = 1;

           ifstream infile("gdata.txt");
           while(!infile.eof()){  
           infile.getline(buffer,Max);
           cout<<"Line:"<<count++<<" ";
           cout<<buffer <<endl;
           }
        }
};



int main(){
    Student s1;
    s1.get();
    s1.show();
    s1.save();
	s1.read();


    return 0;
}






