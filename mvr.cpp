#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    int Messi = 2 * A + 1 * B;
    int Siuu = 2 * X + 1 * Y;
    if (Messi > Siuu)
    {
        cout << "Messi\n";
    }
    else if (Siuu > Messi)
    {
        cout << "Ronaldo\n";
    }
    else
    {
        cout << "Equal\n";
    }
    return 0;
}