#include <stdio.h>
int main()
{
    int i, x, y, n;
    scanf("%d\n", &n);
    while (n--)
    {
        scanf("%d %d", &x, &y);
        int total = x + y, f = 0;
        for (i = 2; i < total; i++)
        {
            if (total % i == 0)
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
    }
    return 0;
}