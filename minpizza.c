#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x * y) < 4)
        {
            printf("1\n");
        }
        else if ((x * y) % 4 == 0)
        {
            printf("%d\n", (x * y) / 4);
        }
        else
        {
            printf("%d\n", ((x * y) / 4) + 1);
        }
    }
    return 0;
}