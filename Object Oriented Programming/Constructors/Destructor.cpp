#include <iostream>
using namespace std;

// Destructor never takes arguments and nor does it return any value...
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor called for object number"
             << count << endl;
    }
    ~num()
    {
        cout << "This is a time when destructor called for object number"
             << count << endl;
        count--; 
    }
};
int main()
{
    cout<<"We are inside Main Function"<<endl;
    cout<<"Creating first Object n1"<<endl;
    num n1;{
        cout<<"Entering this Block"<<endl;
        cout<<"Creating two more Objects "<<endl;
        num n2 , n3;
        cout<<"Existing this Block"<<endl;;
    }
    cout<<"Back to main"<<endl;
    return 0;
}


