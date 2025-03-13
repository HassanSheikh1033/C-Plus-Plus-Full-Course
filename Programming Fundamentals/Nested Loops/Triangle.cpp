 #include<iostream>
 using namespace std;

 
 int main(){

    int rows;
    cout<<"Enter the rows "<<endl;
    cin>>rows;
    
     // Pattern 1:
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
    
     cout<<endl;
     cout<<endl;

      // Pattern 2:
    for(int i = rows; i>=1; i--){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;
    
      // Pattern 3:
      int num = 1;
      for(int i = 1; i<=rows; i++){
        for(int j = 1; j <= rows - i; j++ ){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++ ){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
      }


    return 0;
 }
 
