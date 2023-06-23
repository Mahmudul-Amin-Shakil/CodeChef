#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (((y * 1) + (z * 2)) >= x)
        {
            printf("qualify\n");
        }
        else
        {
            printf("notqualify\n");
        }
    }
    return 0;
}