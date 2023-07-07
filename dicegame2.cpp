#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        sort(a + 3, a + 6);
        if (a[1] + a[2] > a[4] + a[5])
        {
            cout << "alice\n";
        }
        else if (a[1] + a[2] < a[4] + a[5])
        {
            cout << "bob\n";
        }
        else
        {
            cout << "tie\n";
        }
    }
    return 0;
}