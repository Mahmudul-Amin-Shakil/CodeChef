#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x / .1) == (y / .2))
        {
            printf("any\n");
        }
        else if ((x / .1) > (y / .2))
        {
            printf("first\n");
        }
        else
        {
            printf("second\n");
        }
    }
    return 0;
}