#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if (w >= x && y >= z)
        {
            printf("%d\n", w + y);
        }
        else if (w >= x && y <= z)
        {
            printf("%d\n", w + z);
        }
        else if (x >= w && y <= z)
        {
            printf("%d\n", x + z);
        }
        else if (x >= w && y >= z)
        {
            printf("%d\n", x + y);
        }
    }
    return 0;
}