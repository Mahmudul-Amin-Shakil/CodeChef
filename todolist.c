#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int c = 0;
        int i, x, a[5000];
        scanf("%d\n", &x);
        for (i = 0; i < x; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < x; i++)
        {
            if (a[i] >= 1000)
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}