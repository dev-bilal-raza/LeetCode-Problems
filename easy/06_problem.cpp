#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int dayToBuy = 0, dayToSell = 1, max_profit = 0;
        while (dayToSell < prices.size())
        {
            if (prices[dayToBuy] < prices[dayToSell])
            {
                int profit = prices[dayToSell] - prices[dayToBuy];
                max_profit = max(profit, max_profit);
            }
            else
            {
                dayToBuy=dayToSell;
            }
            dayToSell++;
        }
        return max_profit;
    }
};

int main()
{
    vector<int> prices = { 1, 2, 4, 2, 5, 7, 2, 4, 9, 0, 9 };
    cout << "Maximum Profit: " << Solution().maxProfit(prices) << endl;
    return 0;
}