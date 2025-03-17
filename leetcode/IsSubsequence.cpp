#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};

int main() {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";

    if (solution.isSubsequence(s, t)) {
        cout << "Yes, '" << s << "' is a subsequence of '" << t << "'" << endl;
    } else {
        cout << "No, '" << s << "' is NOT a subsequence of '" << t << "'" << endl;
    }

    return 0;
}
