#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y >= x + z) && (x + y >= y + z))
        {
            cout << x + y << endl;
        }
        else if ((y + z >= x + y) && (y + z >= x + z))
        {
            cout << y + z << endl;
        }
        else
        {
            cout << x + z << endl;
        }
    }
    return 0;
}