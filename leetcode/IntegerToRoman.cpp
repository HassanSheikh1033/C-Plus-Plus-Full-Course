#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string> > roman;

        roman.push_back(make_pair(1000, "M"));
        roman.push_back(make_pair(900, "CM"));
        roman.push_back(make_pair(500, "D"));
        roman.push_back(make_pair(400, "CD"));
        roman.push_back(make_pair(100, "C"));
        roman.push_back(make_pair(90, "XC"));
        roman.push_back(make_pair(50, "L"));
        roman.push_back(make_pair(40, "XL"));
        roman.push_back(make_pair(10, "X"));
        roman.push_back(make_pair(9, "IX"));
        roman.push_back(make_pair(5, "V"));
        roman.push_back(make_pair(4, "IV"));
        roman.push_back(make_pair(1, "I"));

        string result = ""; 

        for (size_t i = 0; i < roman.size(); i++) {
            while (num >= roman[i].first) {
                result += roman[i].second;
                num -= roman[i].first;
            }
        }

        return result;    
    }
};

int main() {
    Solution sol;

    int test1 = 3;
    int test2 = 4;
    int test3 = 9;
    int test4 = 58;
    int test5 = 1994;

    cout << "Integer: " << test1 << " -> Roman: " << sol.intToRoman(test1) << endl;
    cout << "Integer: " << test2 << " -> Roman: " << sol.intToRoman(test2) << endl;
    cout << "Integer: " << test3 << " -> Roman: " << sol.intToRoman(test3) << endl;
    cout << "Integer: " << test4 << " -> Roman: " << sol.intToRoman(test4) << endl;
    cout << "Integer: " << test5 << " -> Roman: " << sol.intToRoman(test5) << endl;

    return 0;
}





