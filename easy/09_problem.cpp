#include <iostream>
#include <vector>
using namespace std;

// Question: Remove Duplicates from Sorted Array

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return;
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i -1])
            {
                nums[j++] = nums[i];
            }
        }
        for (int num : nums){
            cout << num;
        }
        cout << endl;
        return j;
    }
};

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    cout << "Answers: " << Solution().removeDuplicates(nums) << endl;
    return 0;
}