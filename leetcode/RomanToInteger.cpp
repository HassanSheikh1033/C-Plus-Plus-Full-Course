#include <iostream>
#include <map>  
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int result = 0; 
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]];
            } else {
                result += roman[s[i]];
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;

    string test1 = "III";
    string test2 = "IV";
    string test3 = "IX";
    string test4 = "LVIII";
    string test5 = "MCMXCIV";

    cout << "Roman: " << test1 << " -> Integer: " << sol.romanToInt(test1) << endl;
    cout << "Roman: " << test2 << " -> Integer: " << sol.romanToInt(test2) << endl;
    cout << "Roman: " << test3 << " -> Integer: " << sol.romanToInt(test3) << endl;
    cout << "Roman: " << test4 << " -> Integer: " << sol.romanToInt(test4) << endl;
    cout << "Roman: " << test5 << " -> Integer: " << sol.romanToInt(test5) << endl;

    return 0;
}

