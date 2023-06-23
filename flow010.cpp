#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char x;
        cin >> x;
        if (x == 'B' || x == 'b')
        {
            cout << "BattleShip\n";
        }
        else if (x == 'C' || x == 'c')
        {
            cout << "Cruiser\n";
        }
        else if (x == 'D' || x == 'd')
        {
            cout << "Destroyer\n";
        }
        else if (x == 'F' || x == 'f')
        {
            cout << "Frigate\n";
        }
    }
    return 0;
}