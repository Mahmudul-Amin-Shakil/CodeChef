#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if ((a + b) > (c + d))
        {
            printf("%d\n", c + d);
        }
        else
        {
            printf("%d\n", a + b);
        }
    }
    return 0;
}