#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g, h, i, j;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
        if (a + c + e + g + i == b + d + f + h + j)
        {
            cout << "0\n";
        }
        else if (a + c + e + g + i > b + d + f + h + j)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}