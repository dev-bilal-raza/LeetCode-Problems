#include <iostream>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int st = 0, end = s.size() - 1;

        while (st < end)
        {
            swap(s[st++], s[end--]);
        }
    }
};

int main()
{
    vector<char> str = {'h', 'e'};
    Solution().reverseString(str);

    cout << "Reversed String: ";
    for (char reversedStr: str){
        cout << reversedStr;
    }
    cout << endl;
    return 0;
}