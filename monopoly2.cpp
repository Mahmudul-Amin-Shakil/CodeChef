#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w + x + y < z || w + x + z < y || w + y + z < x || x + y + z < w)
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