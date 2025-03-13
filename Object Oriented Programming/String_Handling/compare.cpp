#include <iostream>
#include <string>
using namespace std;


int compareLexicographically(string str1, string str2) {
    return str1.compare(str2);
}


void lexicographicComparison() {
    string str1 = "Apple";
    string str2 = "Banana";
    cout << (compareLexicographically(str1, str2) < 0? "str1 comes before str2" :
                   compareLexicographically(str1, str2) > 0? "str1 comes after str2" :
                   "str1 and str2 are equal") << endl;
}



int main() {
    lexicographicComparison();
    return 0;
}





