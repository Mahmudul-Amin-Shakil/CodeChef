#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (z / y < 1)
        {
            printf("0\n");
        }
        else if (z / y <= x)
        {
            printf("%d\n", z / y);
        }
        else
        {
            printf("%d\n", x);
        }
    }
    return 0;
}