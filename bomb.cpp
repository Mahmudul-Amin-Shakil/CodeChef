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
        int a[x], h = 0;
        for (int i = 1; i <= x; i++)
        {
            cin >> a[i];
            if (a[i] < y)
            {
                h = i;
            }
        }
        cout << h << endl;
    }
    return 0;
}