#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (y - x == 0)
        {
            printf("0\n");
        }
        else if ((y - x) % 8 == 0)
        {
            printf("%d\n", (y - x) / 8);
        }
        else if ((y - x) < 8)
        {
            printf("%d\n", ((y - x) / 8) + 1);
        }
        else
        {
            printf("%d\n", ((y - x) / 8) + 1);
        }
    }
    return 0;
}