#include<iostream>
using namespace std;


int main(){
    int arr[5] = {2,1,5,6,7};
    int elem;
    cout<<"Enter value of elem: "<<endl;
    cin>>elem;
    

    for(int j = 0; j < 5;  j++){
        if(arr[j] == elem ){
            cout<<j;
        }
    }
    
}



