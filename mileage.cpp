#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float n, x, y, a, b, d1, d2;
        cin >> n >> x >> y >> a >> b;
        d1 = n / a;
        d2 = n / b;
        if (x * d1 < y * d2)
        {
            cout << "petrol\n";
        }
        else if ((x * d1) == (y * d2))
        {
            cout << "any\n";
        }
        else if ((x * d1) > (y * d2))
        {
            cout << "diesel\n";
        }
    }
    return 0;
}