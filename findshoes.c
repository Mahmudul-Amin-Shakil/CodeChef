#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x <= y)
        {
            printf("%d\n", x);
        }
        else if (x > y)
        {
            printf("%d\n", (x * 2) - y);
        }
    }
    return 0;
}