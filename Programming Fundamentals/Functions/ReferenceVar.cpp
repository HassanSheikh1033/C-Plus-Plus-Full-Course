#include<iostream>
using namespace std;


void addresss(int &a){
    a++;
}

int main(){
    
    int v1;
    cout<<"Enter the value:"<<endl;
    cin>>v1;
     cout<<v1;
    addresss(v1);
    cout<<v1;


    return 0;
}
