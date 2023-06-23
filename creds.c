#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, a;
        scanf("%d%d%d", &x, &y, &z);
        a = x * 4 + y * 2 + z * 0;
        printf("%d\n", a);
    }
    return 0;
}