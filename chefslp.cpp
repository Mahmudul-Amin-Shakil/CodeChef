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
        if (x - y > y)
        {
            cout << y * z << endl;
        }
        else
        {
            cout << (x - y) * z << endl;
        }
    }
    return 0;
}