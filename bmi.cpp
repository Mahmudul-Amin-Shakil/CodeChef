#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y;
        z = x / (y * y);
        if (z <= 18)
        {
            cout << "1\n";
        }
        else if (z >= 19 && z <= 24)
        {
            cout << "2\n";
        }
        else if (z >= 25 && z <= 29)
        {
            cout << "3\n";
        }
        else if (z >= 30)
        {
            cout << "4\n";
        }
    }
    return 0;
}