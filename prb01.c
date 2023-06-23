#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, rem = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                rem++;
            }
        }
        if (rem == 2)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}