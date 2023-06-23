#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j, m, k;
        cin >> j >> m;
        int p = j * m;
        while (j > 0)
        {
            k = j;
            j = m % j;
            m = k;
            if (j == 0)
            {
                cout << p / (k * k) << endl;
            }
        }
    }
    return 0;
}