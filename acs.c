#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if ((x / 100) + (x % 100) <= 10)
        {
            printf("%d\n", (x / 100) + (x % 100));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}