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
        p = w + y * 10;
        q = x + z * 10;
        if (p == q)
        {
            cout << "draw\n";
        }
        else if (p < q)
        {
            cout << "chef\n";
        }
        else
        {
            cout << "chefina\n";
        }
    }
    return 0;
}