#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int mxo = 0, co = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                co++;
                mxo = max(mxo, co);
            }
            else
            {
                co = 0;
            }
        }
        int mxa = 0, ca = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != 0)
            {
                ca++;
                mxa = max(mxa, ca);
            }
            else
            {
                ca = 0;
            }
        }
        if (mxo > mxa)
        {
            cout << "Om" << endl;
        }
        else if (mxo < mxa)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}