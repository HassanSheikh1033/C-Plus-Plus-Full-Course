#include<iostream>
using namespace std;


int main(){
    int s = 5;
    int arr[s] = {3,5,1,4};
    int val;
	int loc;
    cout<<"Enter the value:";
    cin>>val;
    cout<<"Enter the location:";
    cin>>loc;

    for(int i = s; i >  loc; i--){
        arr[i + 1] = arr[i];
    }

    arr[loc] = val;


    for(int i = 0; i < 5; i++){
        cout<<arr[i];
    }


    return 0;
}
