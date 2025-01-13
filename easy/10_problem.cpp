#include <iostream>
#include <vector>
using namespace std;

// Question: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[ans++] = nums[i];
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    cout << "Answer: " << Solution().removeElement(nums, val) << endl;
    return 0;
}