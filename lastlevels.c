#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x % 3 == 0)
        {
            printf("%d\n", y * x + (z) * (x / 3) - z);
        }
        else
        {
            printf("%d\n", y * x + z * (x / 3));
        }
    }
    return 0;
}