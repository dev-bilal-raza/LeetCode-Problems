#include <iostream>
#include <vector>
using namespace std;

// Question: A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

class Solution
{
public:
    bool isAlphaNum(char ch)
    {
        if ((ch >= '0' && ch < '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s)
    {
        int st = 0;
        int end = s.size() - 1;
        while (st < end)
        {
            if (!isAlphaNum(s[st]))
            {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

int main()
{
    cout << "Is Palindrome: " << Solution().isPalindrome("m0ada&0m") << endl;
    return 0;
}