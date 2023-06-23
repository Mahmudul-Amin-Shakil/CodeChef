#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, i;
        cin >> x >> y;
        for (i = 0; i <= 1000; i++)
        {
            y += i;
            if (y >= x)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}