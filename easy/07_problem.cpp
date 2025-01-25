#include <iostream>
using namespace std;

// Question: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if :
// 1) Open brackets must be closed by the same type of brackets.
// 2) Open brackets must be closed in the correct order.
// 3) Every close bracket has a corresponding open bracket of the same type.

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (char bracket : s)
        {
            if (bracket == ')' || bracket == '}' || bracket == ']')
            {
                if (stack.empty()) return false;
                char top = stack.top();
                if ((bracket == ')' && top != '(') ||
                    (bracket == '}' && top != '{') ||
                    (bracket == ']' && top != '['))
                {
                    return false;
                }
                stack.pop();
            }
            else if (bracket == '(' || bracket == '[' || bracket == '{'){
                stack.push(bracket);
            }else {
                return false;
            }
        }
        return stack.empty();
    }
};
int main()
{
    string s = "]";
    cout << "Is Valid: " << Solution().isValid(s) << endl;  // Output: 1
    return 0;
}