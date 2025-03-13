#include<iostream>
using namespace std;
#include<string.h> 


int main(){
    char item[100];
    char item_copy[120];
	cout<<"Enter the item"<<endl;
	gets(item);
    strcpy(item_copy,item);
    cout<<item<<endl;
    cout<<item_copy;
    return 0;
}






