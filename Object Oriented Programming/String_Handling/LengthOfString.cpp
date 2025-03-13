#include<iostream>
using namespace std;
#include<string.h> 


int main(){
    char address[100];
	int length = 0;
	cout<<"Enter the string"<<endl;
	cin.getline(address, 100);
	length = strlen(address);
//	length =  address.length();
	cout<<"Length is "<<length<<endl;


    return 0;
}




