#include<iostream>
#include<fstream>
using namespace std;


int main(){
     char  ch = 'x';
     int j = 77;
     char str1[] = "string1"; 
     char str2[] = "string2";   

    ofstream outfile("fdata.txt");
    outfile<<ch<<j<<" "<<str1<<endl<<str2;

    return 0;
}
