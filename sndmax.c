#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        if (y < x && x < z || z < x && x < y)
            printf("%d\n", x);
        else if (x < y && y < z || z < y && y < x)
            printf("%d\n", y);
        else if (x < z && z < y || y < z && z < x)
            printf("%d\n", z);
    }
    return 0;
}