#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d\n", &a);
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if ((a == (w + x + y + z)) && (w >= x && w >= y && w >= z))
        {
            printf("%d\n", w);
        }
        else if ((a == (w + x + y + z)) && (x >= w && x >= y && x >= z))
        {
            printf("%d\n", x);
        }
        else if ((a == (w + x + y + z)) && (y >= w && y >= x && y >= z))
        {
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", z);
        }
    }
    return 0;
}