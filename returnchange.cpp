#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n;
        r = n % 10;
        if (r >= 5)
        {
            n = (n - r) + 10;
        }
        else
        {
            n = (n - r);
        }
        cout << 100 - n << endl;
    }
    return 0;
}