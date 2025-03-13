#include<iostream>
using namespace std;


int div(int a, int b){
    if(b==0)
        throw 0; 
    return a/b;
}



int main(){
    try{
        int res = div(5,0);
        cout<<"Result of Calculation is: "<<res<<endl; 
    }catch(int msg){
        cout<<"It shows undefined value when we write: "<<msg;
    }

    return 0;
}






 // Define: Exeception Handling is used to deal with the unexpected behaviour of the programs.There are three blocks in 
    // exception handling.
    //  throw -> (immplementtated where the wrong value is processed )
    // try -> (immplementtated  where code can produce exeception)
    // catch -> (used to handle and catch exeception)


