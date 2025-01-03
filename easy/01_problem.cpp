#include <iostream>
#include <vector>
using namespace std;

// Question: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// I am giving this answer in a brute force way.

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int sum = nums[i] + nums[j];
                if (sum == target)
                {
                    cout << "Found Indexes for " << target << ":" << endl;
                    return {i, j};
                }
            }
        }
        cout << "Could not Find Indexes for " << target << endl;
        return {};
    }
};

int main()
{
    vector<int> vec = {1, 3, 2, 3};
    vector<int> ans = Solution().twoSum(vec, 6);
    for (int value : ans)
    {
        cout << value << endl;
    }
    return 0;
}