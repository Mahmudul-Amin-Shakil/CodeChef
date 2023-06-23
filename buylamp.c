#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if (w == x)
        {
            printf("%d\n", x * y);
        }
        else if (x == 0)
        {
            if (w * y > w * z)
            {
                printf("%d\n", w * z);
            }
            else
            {
                printf("%d\n", w * y);
            }
        }
        else if (w > x)
        {
            if (((x * y) + (w - x) * y) > ((x * y) + (w - x) * z))
            {
                printf("%d\n", ((x * y) + (w - x) * z));
            }
            else
            {
                printf("%d\n", ((x * y) + (w - x) * y));
            }
        }
    }
    return 0;
}