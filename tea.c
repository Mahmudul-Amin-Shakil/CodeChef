#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if ((x % y) == 0)
        {
            printf("%d\n", (z * x) / y);
        }
        else
        {
            printf("%d\n", (((x / y) + 1) * z));
        }
    }
    return 0;
}