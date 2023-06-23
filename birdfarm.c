#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (z % y == 0 && z % x == 0)
        {
            printf("any\n");
        }
        else if (z % y == 0)
        {
            printf("duck\n");
        }
        else if (z % x == 0)
        {
            printf("chicken\n");
        }
        else
        {
            printf("none\n");
        }
    }
    return 0;
}