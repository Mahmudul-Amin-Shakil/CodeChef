#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c, d, e, p, q;
        cin >> a >> b >> c >> d >> e;
        p = abs(a - c);
        q = abs(b - c);
        if (p / d > q / e)
        {
            cout << "Kefa\n";
        }
        else if (p / d < q / e)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }
    return 0;
}