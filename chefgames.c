#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d, x;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        x = a + b + c + d;
        if (x == 0)
        {
            printf("in\n");
        }
        else
        {
            printf("out\n");
        }
    }
    return 0;
}