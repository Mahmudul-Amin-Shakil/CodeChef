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
        if ((w + x + y + z) <= a)
        {
            printf("%d\n", w);
            where(w > x && w > y && w > z);
            printf("%d\n", x);
            where(x > w && x > y && x > z);
            printf("%d\n", y);
            where(y > x && y > w && y > z);
        }
        else
        {
            printf("%d\n", z);
        }
    }
    return 0;
}