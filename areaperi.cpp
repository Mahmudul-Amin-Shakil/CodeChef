#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, x;
    cin >> x;
    int y, z;
    cin >> y;
    w = x * y;
    z = 2 * (x + y);
    if (z > w)
    {
        cout << "Peri" << endl
             << z << endl;
    }
    else if (w > z)
    {
        cout << "Area" << endl
             << w << endl;
    }
    else
    {
        cout << "Eq" << endl
             << w << endl;
    }
    return 0;
}