#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c, s;
    cin >> c >> s;
    if ((c == 'G' && s == 'G'))
    {
        cout << "G" << endl;
    }
    else if ((c == 'B' && s == 'B'))
    {
        cout << "B" << endl;
    }
    else if ((c == 'R' && s == 'R'))
    {
        cout << "R" << endl;
    }
    else if ((c == 'G' && s == 'B') || (c == 'B' && s == 'G'))
    {
        cout << "B" << endl;
    }
    else if ((c == 'G' && s == 'R') || (c == 'R' && s == 'G'))
    {
        cout << "R" << endl;
    }
    else if ((c == 'B' && s == 'R') || (c == 'R' && s == 'B'))
    {
        cout << "R" << endl;
    }
    return 0;
}