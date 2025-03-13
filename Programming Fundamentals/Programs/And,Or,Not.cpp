#include <iostream>
using namespace std;

int main()
{
    int a, b, n1, n2;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin>>b;
    cout << "Enter the value of n1:" << endl;
    cin>>n1;
    cout << "Enter the value of n2:" << endl;
    cin>>n2;
    
    (a == n1 && b == n2) ? cout<<"\nTrue" : cout<<"\nFalse";
    (a == n1 || b == n2) ? cout<<"\nTrue" : cout<<"\nFalse";
    
    

    return 0;
}


