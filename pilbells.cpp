#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c == 0)
        {
            cout << d << endl;
        }
        else if (b >= c)
        {
            cout << (c * 10) + d << endl;
        }
        else if (b < c && c < a)
        {
            cout << (b * 10) + (c - b) * 5 + d << endl;
        }
        else if (b < c && c >= a)
        {
            cout << (b * 10) + (c - b) * 5 + d + 20 << endl;
        }
    }
    return 0;
}