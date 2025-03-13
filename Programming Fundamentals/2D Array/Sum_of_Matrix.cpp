#include <iostream>
using namespace std;

int main(){
    int arr1[2][2];
    int arr2[2][2];

    cout<<"Enter elements for 1st Matrix: "<<endl;
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter elements for 2nd Matrix: "<<endl;
    for(int i = 0 ; i<2; i++){
         for(int j =0; j<2; j++){
            cin>>arr2[i][j];
        }  
    }

     for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    int sum[2][2];
    cout<<"Sum of Elements: "<<endl;
    for(int i = 0; i<2; i++){
        for(int j =0; j<2; j++){
        	sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    
    cout<<"Sum of the Matrix is: "<<endl;
    for(int i = 0; i<2; i++){
        for(int j =0; j<2; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}
