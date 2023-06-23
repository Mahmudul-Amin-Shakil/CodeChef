#include <stdio.h>
int main()
{
    int t, x, y, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &x, &y);
        if (x < y)
        {
            printf("PROFIT\n");
        }
        else if (x == y)
        {
            printf("NEUTRAL\n");
        }
        else
        {
            printf("LOSS\n");
        }
    }
    return 0;
}