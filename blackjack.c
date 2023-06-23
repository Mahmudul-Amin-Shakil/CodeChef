#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (((21 - (x + y)) >= 1) && ((21 - (x + y)) <= 10))
        {
            printf("%d\n", 21 - (x + y));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}