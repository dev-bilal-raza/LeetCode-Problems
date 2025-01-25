#include <iostream>
using namespace std;

// Question: Write a function that reverses a string. The input string is given as an array of characters s.You must do this by modifying the input array in - place with O(1) extra memory.

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