#include<iostream>
using namespace std;

// No parameter functions
void count(){
    int count;
    cout<<"Enter first value";
    cin>>count;
    count++; // count = count + 1;
    cout<<count;
}


// Parameter wla functions
void count1(int c){
    c++;
    cout<<c;
}


// Parameter aur return value wla functions
int count2(int c){
    c++;
    return c; 
}





int main(){
  count();  



  int count;
  cout<<"Enter second value";
  cin>>count;
  count1(count);
  int value = count2(count);
  cout<<value; 




 return 0;
}
