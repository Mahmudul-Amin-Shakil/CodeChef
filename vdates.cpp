#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b && a <= c)
        {
            cout << "Take second dose now\n";
        }
        else if (a != b && a != c)
        {
            if (abs(a - c) < abs(a - b))
            {
                cout << "Too Late\n";
            }
            else
            {
                cout << "Too Early\n";
            }
        }
    }
    return 0;
}