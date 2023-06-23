#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x + y) % 2 == 0)
        {
            printf("%d\n", (x + y) / 2);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}