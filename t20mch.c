#include <stdio.h>
int main()
{
    int x, y, z, a;
    scanf("%d%d%d", &x, &y, &z);
    a = (20 - y) * 6 * 6;
    if ((a + z) > x)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}