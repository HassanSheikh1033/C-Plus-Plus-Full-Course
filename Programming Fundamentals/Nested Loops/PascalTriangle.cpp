#include<iostream>
using namespace std;

long long binomialCoeffient(int n, int k){
    if (k==0 || k==n)
    {
        return 1;
    }
    return binomialCoeffient(n-1, k-1) + binomialCoeffient(n-1,k);
    
}

int main(){
    int rows;
    cout<<"Enter the value of rows: "<<endl;
    cin>>rows;
    for(int i = 0; i<rows; i++){
    	for(int j =0; j<=rows-i; ++j){
            cout<<" ";
        }
        for(int j = 0; j<=i; ++j){
            cout<<binomialCoeffient(i,j)<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}


