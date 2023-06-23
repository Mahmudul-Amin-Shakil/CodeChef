#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, g;
        cin >> a >> b >> c >> d >> e >> f >> g;
        if (a + b + c + d + e + f + g > 3)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}