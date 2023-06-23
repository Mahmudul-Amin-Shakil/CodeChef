#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, p;
        scanf("%d%d%d%d", &x, &y, &z, &p);
        if ((x - z) == (y - p))
        {
            printf("any\n");
        }
        else if ((x - z) >= (y - p))
        {
            printf("second\n");
        }
        else
        {
            printf("first\n");
        }
    }
    return 0;
}