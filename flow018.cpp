#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, fact = 1;
        cin >> x;
        for (int i = x; i > 0; i--, x--)
        {
            fact *= x;
        }
        cout << fact << endl;
    }
    return 0;
}