#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d", &x, &y);
        z = (x * 4) + (y * 1);
        printf("%d\n", z);
    }
    return 0;
}