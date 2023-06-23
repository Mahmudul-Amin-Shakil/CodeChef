#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, cnt = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (n % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] == 1)
                    cnt++;
            }
            if (cnt <= n / 2)
            {
                printf("%d\n", (n / 2) - cnt);
            }
            else
            {
                printf("%d\n", cnt - (n / 2));
            }
        }
    }
    return 0;
}