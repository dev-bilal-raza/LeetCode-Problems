#include <iostream>
#include <vector>
using namespace std;

// Question: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};

int main()
{
    vector<int> vec = {1, 2, 1, 2, 4};
    cout << "Found Unique Number: " << (Solution().singleNumber(vec)) << endl;
    return 0;
}