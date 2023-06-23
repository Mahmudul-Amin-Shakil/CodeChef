#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x == y)
        {
            printf("0\n");
        }
        else if (x < y && (y - x) % z != 0)
        {
            printf("%d\n", ((y - x) / z) + 1);
        }
        else if (x < y && (y - x) % z == 0)
        {
            printf("%d\n", ((y - x) / z));
        }
        else if (y < x && (x - y) % z != 0)
        {
            printf("%d\n", ((x - y) / z) + 1);
        }
        else if (y < x && (x - y) % z == 0)
        {
            printf("%d\n", ((x - y) / z));
        }
    }
    return 0;
}