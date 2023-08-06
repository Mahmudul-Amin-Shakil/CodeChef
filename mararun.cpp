#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a, b, c;
        cin >> n >> x >> a >> b >> c;
        if ((n * x) < 10)
        {
            cout << "0\n";
        }
        else if ((n * x) >= 10 && (n * x) < 21)
        {
            cout << a << endl;
        }
        else if ((n * x) >= 21 && (n * x) < 42)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}