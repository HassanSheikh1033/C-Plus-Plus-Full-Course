#include<iostream>
#include<fstream>
using namespace std;


int main(){
    const int Max = 80;
    char buffer[Max];
    int count =1;

    ifstream infile("fdata.txt");
    while(!infile.eof()){  // eof means: end of file.
        infile.getline(buffer,Max);
        cout<<"Line:"<<count++<<" ";
        cout<<buffer <<endl;
    }

    return 0;
}





