#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, a, h = 8;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 7 != 0 && a % 7 != 6)
                h++;
        }
        cout << h << endl;
    }
    return 0;
}