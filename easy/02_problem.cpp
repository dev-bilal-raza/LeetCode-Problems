#include <iostream>
#include <vector>
using namespace std;

// Question: Given an integer x, return true if x is palindrome integer.

// What is a Palindrome?
// A palindrome is a number that reads the same backward as forward. For example, 121 is palindrome while 123 is not.
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int original = x;
        int reversed = 0;

        while (x > 0)
        {
            int lastDigit = x % 10;
            if (reversed > (INT_MAX - lastDigit) / 10)
                return false; // check for overflow
            reversed = reversed * 10 + (x % 10);
            x /= 10;
        }
        return original == reversed;
    }
};

int main()
{
    bool isPalindrome = Solution().isPalindrome(23224324);
    cout << isPalindrome << endl;

    return 0;
}