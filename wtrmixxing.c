#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, p;
        scanf("%d%d%d%d", &x, &y, &z, &p);
        if ((x > y) && (x - y) <= p)
        {
            printf("yes\n");
        }
        else if ((x < y) && (y - x) <= z)
        {
            printf("yes\n");
        }
        else if (x == y)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}