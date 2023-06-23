#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, s;
    cin >> t;
    while (t--)
    {
        int s, x, y;
        cin >> s;
        x = s + 1;
        y = s - x;
        cout << x * y << endl;
    }
    return 0;
}