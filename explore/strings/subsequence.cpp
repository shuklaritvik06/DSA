#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
void subseq(string a, string temp, vector<pair<string, vector<int>>> &result, int count)
{
    if (a.empty())
    {
        vector<int> ascii;
        char *char_array = new char[temp.size() + 1];
        strcpy(char_array, temp.c_str());
        for (int i = 0; i < temp.size(); i++)
        {
            ascii.push_back(toascii(char_array[i]));
        }
        result.push_back({temp, ascii});
        return;
    }
    else
    {
        char n = a.at(0);
        string d = temp + n;
        subseq(a.substr(1), d, result, count++);
        subseq(a.substr(1), temp, result, count++);
    }
}
int main()
{
    string str = "babgbag";
    vector<pair<string, vector<int>>> result;
    subseq(str, "", result, 0);
    for (auto i : result)
    {
        cout << i.first << " ";
        for (auto j : i.second)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}