#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() > 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main()
{
    cout << "Removed All parts: " << Solution().removeOccurrences("kjhfdksdbilal", "bilal")
         << endl;
    return 0;
}