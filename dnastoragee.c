#include <stdio.h>
int main()
{
    int t, i, t1, j, a[t1], x;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &t1);
        x = t1 / 2;
        for (j = 0; j < x; j++)
        {
            scanf("%2d", &a[j]);
        }
        for (j = 0; j < x; j++)
        {
            if (a[j] == 00)
            {
                printf("A");
            }
            else if (a[j] == 01)
            {
                printf("T");
            }
            else if (a[j] == 10)
            {
                printf("C");
            }
            else
            {
                printf("G");
            }
        }
        printf("\n");
    }
}