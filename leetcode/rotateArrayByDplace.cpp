#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than n

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }

private:
    void reverseArray(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    
    // Using push_back() to add elements manually
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    
    int k = 3;

    cout << "Original array: ";
    for (size_t i = 0; i < nums.size(); i++) { // Traditional for loop
        cout << nums[i] << " ";
    }
    cout << endl;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (size_t i = 0; i < nums.size(); i++) { // Traditional for loop
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

