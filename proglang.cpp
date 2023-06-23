#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if ((a == c || a == d) && (b == c || b == d))
        {
            cout << "1\n";
        }
        else if ((a == e || a == f) && (b == e || b == f))
        {
            cout << "2\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}