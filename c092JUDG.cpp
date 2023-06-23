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
        int a[n], b[n], c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n - 1; i++)
        {
            c1 += a[i];
            c2 += b[i];
        }
        if (c1 < c2)
        {
            cout << "Alice\n";
        }
        else if (c1 > c2)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }
    return 0;
}