#include <stdio.h>
int main()
{
    int t, x, y, a, b, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &x, &y, &a, &b);
        if ((x == a && y == b) || (x == b && y == a))
        {
            printf("0\n");
        }
        else if ((x == a || y == a) || (x == b || y == b))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}