#include <iostream>
using namespace std;

int main(){


    for (int i = 8; i >= 1; --i) {
        for (int j = 8; j >= i; --j) {
            cout << j << "  ";
        }
        cout <<endl;
    }
  

     cout <<"\n\n\n";



     for (int i = 0; i < 8; ++i) {
        for (int j = 8; j > i; --j) {
            cout << j << "  ";
        }
        cout <<endl;
    }
    

    return 0;
}
