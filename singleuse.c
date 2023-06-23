#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        w = x - z;
        if (w == 0)
        {
            printf("%d\n", x / z);
        }
        else if (w % y == 0)
        {
            printf("%d\n", (w / y) + 1);
        }
        else
        {
            printf("%d\n", (w / y) + 2);
        }
    }
    return 0;
}