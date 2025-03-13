#include <iostream>
using namespace std;


int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1); 
}

int fun1(int n){
    if(n==1){
        return 0;
    }
    return 1+fun1(n/2);
}

int fun2(int x,int y){
    if(x==0){
        return y;
    }
    return fun2(x-1,x+y);
}


int power(int x, int n){
    if(n==1){
        return x;
    }
    return x*power(x,n-1);
}

int sum(int n){
    if(n==1){
        return n;
    }
    return n+sum(n-1);
}

int main() {
    int num = 11;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    cout<<fun1(num);
    return 0;
}




