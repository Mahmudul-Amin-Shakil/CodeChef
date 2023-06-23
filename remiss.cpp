#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << x << " " << x + y << endl;
        }
        else
        {
            cout << y << " " << x + y << endl;
        }
    }
    return 0;
}