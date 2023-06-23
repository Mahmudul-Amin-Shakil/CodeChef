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
        if (x >= 2000)
        {
            cout << "1\n";
        }
        else if (x < 2000 && x >= 1600)
        {
            cout << "2\n";
        }
        else if (x < 1600)
        {
            cout << "3\n";
        }
    }
    return 0;
}