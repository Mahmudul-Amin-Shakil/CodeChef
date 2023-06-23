#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, p;
        cin >> x >> y >> z;
        p = (y + (100 - x) * z) * 10;
        cout << p << endl;
    }
    return 0;
}