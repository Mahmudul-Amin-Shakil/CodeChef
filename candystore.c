#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (y <= x)
        {
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", (y - x) * 2 + x);
        }
    }
    return 0;
}