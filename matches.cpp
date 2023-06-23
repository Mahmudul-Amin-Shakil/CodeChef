#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, sum = 0, m[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        cin >> a >> b;
        c = a + b;
        while (c > 0)
        {
            sum += m[c % 10];
            c /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}