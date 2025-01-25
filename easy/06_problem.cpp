#include <iostream>
#include <vector>
using namespace std;

// Question: You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit, return 0.

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int dayToBuy = 0, max_profit = 0;
        for (int i = 1; i < prices.size(); i++){
            if (prices[dayToBuy] < prices[i]){
                int profit = prices[i] - prices[dayToBuy];
                max_profit = max(profit, max_profit);
            }
            else{
                dayToBuy = i;
            }
        }
        return max_profit;
    }
};

int main()
{
    vector<int> prices = {1, 2, 4, 2, 5, 7, 2, 4, 9, 0, 9};
    cout << "Maximum Profit: " << Solution().maxProfit(prices) << endl;
    return 0;
}