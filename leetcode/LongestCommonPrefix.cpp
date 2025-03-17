#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; 

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) { 
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) return ""; 
            }
        }

        return prefix; 
    }
};


int main() {
    Solution sol;

    vector<string> test1;
    test1.push_back("flower");
    test1.push_back("flow");
    test1.push_back("flight");

    vector<string> test2;
    test2.push_back("dog");
    test2.push_back("racecar");
    test2.push_back("car");

    vector<string> test3;
    test3.push_back("interview");
    test3.push_back("internet");
    test3.push_back("interact");

    vector<string> test4;
    test4.push_back("a");

    vector<string> test5;
    test5.push_back("apple");
    test5.push_back("app");

    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(test1) << endl;
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(test2) << endl;
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(test3) << endl;
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(test4) << endl;
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(test5) << endl;

    return 0;
}



