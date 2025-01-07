#include <iostream>
#include <vector>
using namespace std;

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