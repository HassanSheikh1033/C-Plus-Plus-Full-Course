#include<iostream>
using namespace std;

void SortedArr(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
         
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<": ";
        cin>>arr[i];
    }
    SortedArr(arr,n);
    
    
    return 0;
}
