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
        if (x == 0 && y == 0 && z == 0)
        {
            cout << "0\n";
        }
        else if (x == 1 && y == 1 && z == 1)
        {
            cout << "0\n";
        }
        else if (x + y + z >= 1)
        {
            cout << "1\n";
        }
    }
    return 0;
}