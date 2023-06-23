#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x;
        y = x / 2 - 1;
        if (y <= 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << y * (y + 1) / 2 << endl;
        }
    }
    return 0;
}