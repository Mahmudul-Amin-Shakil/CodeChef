#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x >= y)
        {
            printf("%d\n", 7 - x);
        }
        else
        {
            printf("%d\n", 7 - y);
        }
    }
    return 0;
}