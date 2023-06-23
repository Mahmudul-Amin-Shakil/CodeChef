#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x % 6 == 0)
        {
            printf("%d\n", (x / 6) * y);
        }
        else
        {
            printf("%d\n", ((x / 6) + 1) * y);
        }
    }
    return 0;
}