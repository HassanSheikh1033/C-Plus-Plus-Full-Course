#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 10001; 
        int maxProfit = 0;
        
        for (size_t i = 0; i < prices.size(); i++) { // Traditional for loop
            int price = prices[i];

            if (price < minPrice) {
                minPrice = price;
            }

            int profit = price - minPrice;
            
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        
        return maxProfit;
    }
};

int main() {
    Solution solution;
    vector<int> prices;

    // Using push_back() to add elements manually
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);

    cout << "Maximum Profit: " << solution.maxProfit(prices) << endl;

    return 0;
}


