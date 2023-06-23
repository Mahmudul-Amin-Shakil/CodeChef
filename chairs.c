#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z = 0;
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            printf("%d\n", x - y);
        }
        else
        {
            printf("%d\n", z);
        }
    }
    return 0;
}