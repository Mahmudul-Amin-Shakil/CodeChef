#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, count = 0;
        scanf("%d", &x);
        int a[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < x; i++)
        {
            if (a[i] >= 10 && a[i] <= 60)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}