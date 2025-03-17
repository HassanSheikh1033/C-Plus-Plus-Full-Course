#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        // Traditional for loop for C++98 compatibility
        for (size_t i = 0; i < nums.size(); i++) {
            int num = nums[i];

            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        count = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate) {
                count++;
            }
        }

        return candidate;
    }
};

int main() {
    Solution solution;
    vector<int> nums;

    // Using push_back() to add elements manually
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(3);

    cout << "Majority Element: " << solution.majorityElement(nums) << endl;

    return 0;
}
