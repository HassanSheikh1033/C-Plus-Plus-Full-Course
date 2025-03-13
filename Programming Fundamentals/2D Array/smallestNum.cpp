#include <iostream>
using namespace std;

int main(){
    int arr[2][2];
    int smallest;

    cout<<"Enter a number: "<<endl;
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"2D Array Matrix is : "<<endl;
     for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }


	smallest = arr[0][0];	
    for(int i = 0 ; i<2; i++){
         for(int j =0; j<2; j++){
         	
            if(arr[i][j] < smallest){
              smallest = arr[i][j];
            }
        }  
    }
    cout<<"Smallest Number is : "<<smallest<<endl;

    return 0;
}
