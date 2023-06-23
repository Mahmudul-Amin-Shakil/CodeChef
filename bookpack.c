#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (y % z == 0)
        {
            printf("%d\n", (y / z) * x);
        }
        else
        {
            printf("%d\n", ((y / z) + 1) * x);
        }
    }
    return 0;
}