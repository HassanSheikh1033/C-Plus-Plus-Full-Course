#include<iostream>
#include<fstream>
using namespace std;


int main(){
    char ch;
    int j;
    char str1[80];
    char str2[80];

    ifstream infile("fdata.txt");
    infile>>ch>>j>>str1>>str2;

    cout<<ch<<j<<" "<<str1<<" "<<str2;


    return 0;
}




