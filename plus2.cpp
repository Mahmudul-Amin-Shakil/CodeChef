#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << (n * 2 + 1) + (n - 1) << endl;
        }
    }
    return 0;
}