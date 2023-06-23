#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, p;
        scanf("%d%d%d", &x, &y, &z);
        p = (z - y) / x;
        printf("%d\n", p);
    }
    return 0;
}