#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            printf("second\n");
        }
        else if (y > x)
        {
            printf("first\n");
        }
        else
        {
            printf("any\n");
        }
    }
    return 0;
}