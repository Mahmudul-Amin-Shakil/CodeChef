#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        int bal = k;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] <= bal)
            {
                cout << "1";
                bal = bal - arr[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}