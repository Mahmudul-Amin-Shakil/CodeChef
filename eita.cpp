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
        p = x * 7;
        q = (y * w) + z * (7 - w);
        if (p > q)
        {
            cout << ""
                 << p << endl;
        }
        else
        {
            cout << ""
                 << q << endl;
        }
    }
    return 0;
}