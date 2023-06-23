#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, n;
        cin >> m >> n;
        bool b = true;
        bool ans = false;
        while (m > 0)
        {
            if (m == n)
            {
                ans = true;
                break;
            }
            else if (m % 2)
                b = false;
            m /= 2;
        }
        if (b & m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}