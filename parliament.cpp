#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        if ((x / 2) <= y)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}