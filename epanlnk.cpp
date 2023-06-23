#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll k = 20;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ans = (ans * 10 + (s[i] - '0')) % k;
        }
        cout << ans << endl;
    }
    return 0;
}