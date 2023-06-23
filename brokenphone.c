#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x == y)
        {
            printf("any\n");
        }
        else if (x > y)
        {
            printf("new phone\n");
        }
        else
        {
            printf("repair\n");
        }
    }
    return 0;
}