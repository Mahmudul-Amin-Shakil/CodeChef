#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if ((a / c) == (b / d))
        {
            if ((a / c) < e)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
        }
        else if ((a / c) > (b / d))
        {
            if ((b / d) < e)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
        }
        else if ((a / c) < (b / d))
        {
            if ((a / c) < e)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
        }
    }
    return 0;
}