#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y) > z)
        {
            cout << "train\n";
        }
        else if ((x + y) < z)
        {
            cout << "planebus\n";
        }
        else
        {
            cout << "equal\n";
        }
    }
    return 0;
}