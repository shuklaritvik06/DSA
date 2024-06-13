#include <iostream>
#include <string>
using namespace std;
void removeAs(string a, string *temp, int i)
{
    if (i == a.size())
        return;
    if (a[i] != 'a')
        *temp += a[i];
    removeAs(a, temp, ++i);
}
string skipApple(string a, int i, string temp)
{
    if (i == a.size())
        return temp;
    if (a.starts_with("apple"))
        return skipApple(a.substr(i + 4), i++, temp);
    else
    {
        temp += a.substr(i, 1);
        return skipApple(a.substr(i), i++, temp);
    }
}
string skipApp(string a, int i, string temp)
{
    if (i == a.size())
        return temp;
    if (a.starts_with("app") && !a.starts_with("apple"))
        return skipApp(a.substr(i + 2), i++, temp);
    else
    {
        temp += a.substr(i, 1);
        return skipApp(a.substr(i), i++, temp);
    }
}
int main()
{
    string a;
    removeAs("baccad", &a, 0);
    cout << a << endl;
    string str = "ihaveaappleandiwill";
    string str2 = "ihaveaappaleandiwill";
    cout << skipApple(str, 0, "") << endl;
    cout << skipApp(str2, 0, "") << endl;
    return 0;
}