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
        if (x >= 1 && x <= 5 && y >= 1 && y <= 5)
        {
            if ((x + y) % 2 == 0)
            {
                cout << "Bob\n";
            }
            else
            {
                cout << "Alice\n";
            }
        }
    }
    return 0;
}