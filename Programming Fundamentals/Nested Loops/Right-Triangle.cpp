#include<iostream>
using namespace std;

int main(){

    // Pattern 1:
    int rows;
    cout<<"Enter the rows "<<endl;
    cin>>rows;
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;
     

    // Pattern 2:
    for(int i = rows; i>=1; i--){
        for(int j = 1; j <= i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;
     

    // Pattern 3:
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++ ){
           	cout<<"";
		    cout<<j;
		
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;
     

    // Pattern 4:
    for(int i = rows; i>=1; i--){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    // Pattern 5:
    int num = 1;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    
    
    
    // Pattern 6:
    for (int i = 8; i >=1; --i) {
        for (int j = 8; j >= i; --j) {
            cout << j << " ";           //Apply these conditions: j*j .. j*2.. j+2..
        }
        cout << endl;
    }
    


    return 0;
}
