#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) {
                return false;
            }

            maxReach = max(maxReach, i + nums[i]);

            if (maxReach >= nums.size() - 1) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution sol;
    
    vector<int> test1;
    test1.push_back(2);
    test1.push_back(3);
    test1.push_back(1);
    test1.push_back(1);
    test1.push_back(4);
    
    vector<int> test2;
    test2.push_back(3);
    test2.push_back(2);
    test2.push_back(1);
    test2.push_back(0);
    test2.push_back(4);
    
    vector<int> test3;
    test3.push_back(0);
    
    vector<int> test4;
    test4.push_back(2);
    test4.push_back(0);
    test4.push_back(0);

    cout << "Test 1: " << (sol.canJump(test1) ? "Can Jump" : "Cannot Jump") << endl;
    cout << "Test 2: " << (sol.canJump(test2) ? "Can Jump" : "Cannot Jump") << endl;
    cout << "Test 3: " << (sol.canJump(test3) ? "Can Jump" : "Cannot Jump") << endl;
    cout << "Test 4: " << (sol.canJump(test4) ? "Can Jump" : "Cannot Jump") << endl;

    return 0;
}


