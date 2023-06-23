#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int first = ((s[0] - '0') * 10 + (s[1] - '0'));
        int second = ((s[3] - '0') * 10 + (s[4] - '0'));
        if (first > 12)
        {
            cout << "DD/MM/YYYY\n";
        }
        else if (second > 12)
        {
            cout << "MM/DD/YYYY\n";
        }
        else
        {
            cout << "BOTH\n";
        }
    }
    return 0;
}