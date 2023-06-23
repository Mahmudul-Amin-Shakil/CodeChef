#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((2 * (a + b)) % 4 == 0)
        {
            if ((2 * ((a - 1) + b) % 4 == 0) || (2 * (1 + b) % 4 == 0))
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
            }
        }
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}