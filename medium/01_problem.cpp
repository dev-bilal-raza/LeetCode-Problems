#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN;
        int subArrSum = 0;
        for (int num : nums)
        {
            subArrSum += num;
            ans = max(subArrSum, ans);
            if (subArrSum < 0)
            {
                subArrSum = 0;
            }
        }
        return ans;
    };
};

int main()
{
    vector<int> vec = {1, 2, 3, -8, -3};
    cout << "Maximum SubArray Sum: " << Solution().maxSubArray(vec) << endl;
    return 0;
}