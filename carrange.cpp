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
        if (x == 1)
        {
            cout << y * z << endl;
        }
        else
        {
            cout << (y - (x - 1)) * z << endl;
        }
    }
    return 0;
}