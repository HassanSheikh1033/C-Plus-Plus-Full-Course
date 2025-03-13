#include<iostream>
using namespace std;


class ArrayOp{
    public:
        void insertion(int arr[5]){
            int val,loc;
            cout<<"Enter the value";
            cin>>val;
            cout<<"Enter loc";
            cin>>loc;

            for(int i = 4; i>=loc; i--){
                arr[i+1] = arr[i];
            }

            arr[loc] = val;
        }


         void insertion(int arr[5]){
            int val;
            int N = 4;
            cout<<"Enter the value";
            cin>>val;

            for(int i = val; i<N; i++){
                arr[i] = arr[i+1];
            }

            N = N - 1; 

            arr[loc] = val;
        }
};

