#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int s, x, y, z;
        scanf("%d%d%d%d", &s, &x, &y, &z);
        if ((x + y + z) <= s)
        {
            printf("0\n");
        }
        else if (z <= (s - x) || z <= (s - y))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}