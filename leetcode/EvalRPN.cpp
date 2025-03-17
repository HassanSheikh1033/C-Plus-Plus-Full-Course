#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>  // Required for string to integer conversion

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (size_t i = 0; i < tokens.size(); i++) {  // Using size_t for loop
            string token = tokens[i];

            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);
            } else {
                st.push(stringToInt(token));  // Convert string to int
            }
        }

        return st.top();
    }

private:
    int stringToInt(const string& s) {
        int num;
        stringstream ss(s);
        ss >> num;
        return num;
    }
};

int main() {
    Solution solution;

    vector<string> tokens1;
    tokens1.push_back("2");
    tokens1.push_back("1");
    tokens1.push_back("+");
    tokens1.push_back("3");
    tokens1.push_back("*");

    cout << "Result: " << solution.evalRPN(tokens1) << endl; // Output: 9

    vector<string> tokens2;
    tokens2.push_back("4");
    tokens2.push_back("13");
    tokens2.push_back("5");
    tokens2.push_back("/");
    tokens2.push_back("+");

    cout << "Result: " << solution.evalRPN(tokens2) << endl; // Output: 6

    vector<string> tokens3;
    tokens3.push_back("10");
    tokens3.push_back("6");
    tokens3.push_back("9");
    tokens3.push_back("3");
    tokens3.push_back("/");
    tokens3.push_back("-");
    tokens3.push_back("*");

    cout << "Result: " << solution.evalRPN(tokens3) << endl; // Output: -30

    return 0;
}
