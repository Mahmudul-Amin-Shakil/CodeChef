#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i, j, a[n], b[n], c = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] >= b[i])
                {
                    c += 1;
                }
            }
            else if ((a[i] - a[i - 1]) >= b[i])
            {
                c += 1;
            }
        }
        cout << c << endl;
    }
    return 0;
}