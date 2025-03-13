#include <iostream>
using namespace std;
 
class binary
{
    string s;
 //By default ..everything in class is private...
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void) 
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrent Binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

///----------------Main-Function----------------///
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    // (This function used as Data Integrity)
    return 0;
}
