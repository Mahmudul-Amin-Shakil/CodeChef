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
        if (a == b)
        {
            cout << "yes\n";
        }
        else if (a < b)
        {
            while (a < b)
            {
                a = 2 * a;
            }
            if (a == b)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
        else if (a > b)
        {
            while (a > b)
            {
                b = 2 * b;
            }
            if (a == b)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
    return 0;
}