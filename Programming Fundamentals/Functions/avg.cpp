#include <iostream>
using namespace std;


int avg(int a,int b){
    int average,sum=0;
    sum = a+b;
    average = sum/2;
    return average;
}


int main(){
    int sub1;
    int sub2;
	cout<<"Enter the values: "<<endl;
    cin>>sub1>>sub2;
   cout<<"The avg of the subjects: "<<endl;
   int average;
   average = avg(sub1,sub2);
   cout<<average;
   
   return 0;
}

