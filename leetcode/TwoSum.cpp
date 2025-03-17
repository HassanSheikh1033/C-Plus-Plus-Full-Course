#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                vector<int> result;
                result.push_back(left + 1);
                result.push_back(right + 1);
                return result;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return vector<int>(); // Return an empty vector if no solution found
    }
};

int main() {
    Solution solution;
    vector<int> numbers;
    
    // Manually pushing values instead of using {1,2,3,4,5} syntax (C++98 restriction)
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);
    
    int target = 9;

    vector<int> result = solution.twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
