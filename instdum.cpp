#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        double sr;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int s = 0, ti = 0;
        for (int i = 1; i <= n; i++)
        {
            s += a[i];
            sr = (double)(s * 100) / i;
            if (sr == 100)
            {
                ti++;
            }
        }
        cout << ti << endl;
    }
}