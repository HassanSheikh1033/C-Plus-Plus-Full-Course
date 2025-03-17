#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words; 
        string word = "";
        
        for (char c : s) {
            if (c == ' ') { 
                if (!word.empty()) { 
                    words.push_back(word);
                    word = ""; 
                }
            } else {
                word += c; 
            }
        }
        
        if (!word.empty()) words.push_back(word); 
        reverse(words.begin(), words.end());
        
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i < words.size() - 1) result += " "; 
        }
        
        return result;
    }
};

// Main function for testing
int main() {
    Solution solution;
    string input = "  Hello   world!  ";
    string output = solution.reverseWords(input);

    cout << "Reversed Words: \"" << output << "\"" << endl;
    return 0;
}


