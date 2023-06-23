#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float w, x, y, z, p, q;
        cin >> w >> x >> y >> z;
        p = y / w;
        q = z / x;
        if (p == q)
        {
            cout << "0\n";
        }
        else if (p < q)
        {
            cout << "-1\n";
        }
        else
        {
            cout << "1\n";
        }
    }
    return 0;
}