#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i; 
            }
        }
        return -1;
    }
};

// Main function for testing
int main() {
    Solution solution;
    string haystack = "hello";
    string needle = "ll";

    int index = solution.strStr(haystack, needle);

    if (index != -1) {
        cout << "First occurrence of \"" << needle << "\" in \"" << haystack << "\" is at index: " << index << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}
