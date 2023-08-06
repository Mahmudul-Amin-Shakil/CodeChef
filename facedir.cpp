#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s[4] = {"North", "East", "South", "West"};
        cout << s[x % 4] << endl;
    }
    return 0;
}