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
        if (x > 65)
        {
            cout << "overload\n";
        }
        else if (x < 35)
        {
            cout << "underload\n";
        }
        else
        {
            cout << "normal\n";
        }
    }
    return 0;
}