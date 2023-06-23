#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x <= y && x <= z)
        {
            printf("%d\n", y + z);
        }
        else if (y <= x && y <= z)
        {
            printf("%d\n", x + z);
        }
        else
        {
            printf("%d\n", x + y);
        }
    }
    return 0;
}