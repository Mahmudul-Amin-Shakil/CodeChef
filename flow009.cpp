#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y;
        cin >> x >> y;
        if (x > 1000)
        {
            cout << fixed << setprecision(6) << (x * y) - (x * y * .1) << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << x * y << endl;
        }
    }
    return 0;
}