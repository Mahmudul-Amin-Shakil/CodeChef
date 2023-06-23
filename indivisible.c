#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, i;
        scanf("%d%d%d", &x, &y, &z);
        for (i = 1; i < 100; i++)
        {
            if ((x % i) != 0 && (y % i) != 0 && (z % i) != 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}