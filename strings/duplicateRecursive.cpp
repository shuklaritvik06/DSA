#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    static void subseq(string a, string &temp, vector<string> &result, string target)
    {
        if (a.empty())
        {
            if (temp == target)
                result.push_back(temp);
            return;
        }
        else
        {
            subseq(a.substr(1), temp, result, target);
            char n = a.at(0);
            temp.push_back(n);
            subseq(a.substr(1), temp, result, target);
            temp.pop_back();
        }
    }
    int numDistinct(string s, string t)
    {
        int count = 0;
        vector<string> distinct;
        string temp = "";
        subseq(s, temp, distinct, t);
        for (auto i : distinct)
        {
            if (i == t)
                count++;
        }
        return count;
    }
};
int main()
{
    Solution a;
    cout << a.numDistinct("bccbcdcabadabddbccaddcbabbaaacdba", "bccbbdc") << endl;
    return 0;
}
