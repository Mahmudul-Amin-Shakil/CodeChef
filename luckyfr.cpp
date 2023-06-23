#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int count = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '4')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}