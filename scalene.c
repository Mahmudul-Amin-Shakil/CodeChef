#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x == y || y == z || z == x)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}