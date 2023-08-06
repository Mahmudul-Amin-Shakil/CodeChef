#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            int diff = b - a;
            if (diff > 5)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}