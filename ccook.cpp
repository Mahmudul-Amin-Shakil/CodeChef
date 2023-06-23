#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, x;
        cin >> a >> b >> c >> d >> e;
        x = a + b + c + d + e;
        if (x == 0)
        {
            cout << "Beginner\n";
        }
        else if (x == 1)
        {
            cout << "Junior Developer\n";
        }
        else if (x == 2)
        {
            cout << "Middle Developer\n";
        }
        else if (x == 3)
        {
            cout << "Senior Developer\n";
        }
        else if (x == 4)
        {
            cout << "Hacker\n";
        }
        else if (x == 5)
        {
            cout << "Jeff Dean\n";
        }
    }
    return 0;
}