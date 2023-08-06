#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= b)
        {
            cout << "Good boi\n";
        }
        else
        {
            cout << "Bad boi\n";
        }
    }
    return 0;
}