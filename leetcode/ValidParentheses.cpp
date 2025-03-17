#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false; 
                char top = st.top();
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop(); 
                } else {
                    return false; 
                }
            }
        }

        return st.empty();   
    }
};

int main() {
    Solution sol;
    string test1 = "()";
    string test2 = "([{}])";
    string test3 = "(]";
    string test4 = "({[)]}";

    cout << "Test 1: " << (sol.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (sol.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (sol.isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << (sol.isValid(test4) ? "Valid" : "Invalid") << endl;

    return 0;
}

