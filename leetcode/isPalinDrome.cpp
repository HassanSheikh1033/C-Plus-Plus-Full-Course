#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;              
        int right = s.size() - 1;   

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;  
            }
            left++;
            right--;
        }

        return true; 
    }
};

// Main function for testing
int main() {
    Solution solution;
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";

    cout << "Is \"" << test1 << "\" a palindrome? " 
         << (solution.isPalindrome(test1) ? "Yes" : "No") << endl;

    cout << "Is \"" << test2 << "\" a palindrome? " 
         << (solution.isPalindrome(test2) ? "Yes" : "No") << endl;

    return 0;
}
