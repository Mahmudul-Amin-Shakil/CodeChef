#include <stdio.h>
int main()
{
    int x, y, z, p;
    scanf("%d%d%d%d", &x, &y, &z, &p);
    if (x == p || y == p || z == p)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}