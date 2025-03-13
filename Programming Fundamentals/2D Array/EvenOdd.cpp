#include <iostream>
using namespace std;

int main(){
    int arr[2][2];

    cout<<"Enter a number: "<<endl;
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    
     for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            if(arr[i][j] % 2 == 0){
            	cout<<arr[i][j]<<" is Even.."<<endl;
            }
        }
    }
    

    return 0;
}
