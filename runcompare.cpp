#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        int cnt = 0;
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
            if (a[i] > b[i])
            {
                if (a[i] <= 2 * b[i])
                {
                    cnt++;
                }
            }
            else if (a[i] < b[i])
            {
                if (2 * a[i] >= b[i])
                {
                    cnt++;
                }
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}