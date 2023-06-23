#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        int a = x - y;
        int b = z * a;
        printf("%d\n", b);
    }
    return 0;
}