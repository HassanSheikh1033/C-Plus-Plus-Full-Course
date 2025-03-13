 #include<iostream>
 using namespace std;

 
 int main(){

    int rows;
    cout<<"Enter the rows "<<endl;
    cin>>rows;
    
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++ ){
            cout<<(j==1 || j==2*i-1 ? "*" : " ");
        }
        cout<<endl;
    }

    for(int i = rows-1; i>=1; i--){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= 2*i-1; j++ ){
            cout<<(j==1 || j==2*i-1 ? "*" : " ");
        }
        cout<<endl;
    }


    return 0;
 }
