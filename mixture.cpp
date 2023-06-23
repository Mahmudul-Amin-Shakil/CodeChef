#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0 && y > 0)
        {
            cout << "solution\n";
        }
        else if (x == 0 && y != 0)
        {
            cout << "liquid\n";
        }
        else
        {
            cout << "solid\n";
        }
    }
    return 0;
}