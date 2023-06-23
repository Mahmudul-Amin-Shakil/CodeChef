#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z, p, q;
        cin >> w >> x >> y >> z;
        p = x + abs(y / 2);
        q = w * p;
        if (q <= z)
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