#include <iostream>
using namespace std;

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