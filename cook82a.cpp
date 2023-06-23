#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rm, bl, ml, eb;
        for (int i = 0; i < 4; i++)
        {
            string team;
            cin >> team;
            if (team == "RealMadrid")
            {
                cin >> rm;
            }
            else if (team == "Barcelona")
            {
                cin >> bl;
            }
            else if (team == "Malaga")
            {
                cin >> ml;
            }
            else if (team == "Eibar")
            {
                cin >> eb;
            }
        }
        if (bl > eb && rm < ml)
        {
            cout << "Barcelona\n";
        }
        else
        {
            cout << "RealMadrid\n";
        }
    }
    return 0;
}