#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, a, b;
        cin >> x >> y >> z;
        if ((x * y) % z == 0)
        {
            a = x * y;
            b = z;
            cout << a << " " << b << endl;
        }
        else if ((x * z) % y == 0)
        {
            a = x * z;
            b = y;
            cout << a << " " << b << endl;
        }
        else if ((y * z) % x == 0)
        {
            a = y * z;
            b = x;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}