#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x % y) == 0)
        {
            printf("%d\n", x / y);
        }
        else if ((x % y) != 0)
        {
            printf("%d\n", (x / y) + (x % y));
        }
        else if (x < y)
        {
            printf("%d\n", x);
        }
    }
    return 0;
}