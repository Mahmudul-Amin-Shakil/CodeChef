#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, x1, y, y1, z, z1;
        cin >> x >> x1 >> y >> y1 >> z >> z1;
        if (x <= x1 && y <= y1 && z >= z1)
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