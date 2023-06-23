#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 4 == 0)
        {
            cout << "NO\n";
        }
        else if (x < 4 && x % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (x > 4 && x % 2 == 0 && x % 4 != 0)
        {
            cout << "YES\n";
        }
    }
    return 0;
}