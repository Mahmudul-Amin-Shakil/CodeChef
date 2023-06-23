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
        if (x + z > y)
        {
            cout << x + z << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}