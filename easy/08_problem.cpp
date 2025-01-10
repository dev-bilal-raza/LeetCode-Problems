#include <iostream>
#include <vector>
using namespace std;

// Question: implement a majority element finder

// I am solving this problem with Moore's algorithm

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freq = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
            {
                ans = nums[i];
            }
            if (nums[i] == ans)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {3, 2, 3, 1, 2, 2, 2};
    cout << "Majority Element: " << Solution().majorityElement(vec) << endl;
    return 0;
}