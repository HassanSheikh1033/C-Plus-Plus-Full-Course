#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1; 

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution sol;

    string test1 = "Hello World";
    string test2 = "   fly me   to   the moon  ";
    string test3 = "luffy is still joyboy";
    string test4 = "a";
    string test5 = "   ";

    cout << "Last word length in \"" << test1 << "\": " << sol.lengthOfLastWord(test1) << endl;
    cout << "Last word length in \"" << test2 << "\": " << sol.lengthOfLastWord(test2) << endl;
    cout << "Last word length in \"" << test3 << "\": " << sol.lengthOfLastWord(test3) << endl;
    cout << "Last word length in \"" << test4 << "\": " << sol.lengthOfLastWord(test4) << endl;
    cout << "Last word length in \"" << test5 << "\": " << sol.lengthOfLastWord(test5) << endl;

    return 0;
}
