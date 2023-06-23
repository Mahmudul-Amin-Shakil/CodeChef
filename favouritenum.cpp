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
        if (x % 2 == 0 && x % 7 == 0)
        {
            cout << "alice\n";
        }
        else if (x % 2 != 0 && x % 9 == 0)
        {
            cout << "bob\n";
        }
        else
        {
            cout << "charlie\n";
        }
    }
    return 0;
}