#include<iostream>
using namespace std;

void greatest(int arr[]){
    int gt = 1;
    for(int k = 0; k<5; k++){
        if(gt < arr[k]){
            gt = arr[k];
        }
    }
     cout<<"Number = "<<gt<<" is greater once";
   
}

int main(){
    
    int arr[5];

    cout<<"Enter the values: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    greatest(arr);




    return 0;
}
