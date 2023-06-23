#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 1 && a <= 50)
    {
        cout << "100\n";
    }
    else if (a > 50 && a <= 100)
    {
        cout << "50\n";
    }
    else
    {
        cout << "0\n";
    }
    return 0;
}