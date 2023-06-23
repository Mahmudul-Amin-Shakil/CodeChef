#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x * 2) > (y * 5))
        {
            printf("chocolate\n");
        }
        else if ((x * 2) < (y * 5))
        {
            printf("candy\n");
        }
        else
        {
            printf("either\n");
        }
    }
    return 0;
}