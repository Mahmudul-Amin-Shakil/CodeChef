#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x % 10 == 0)
        {
            printf("%d\n", x / 10);
        }
        else
        {
            printf("%d\n", (x / 10) + 1);
        }
    }
    return 0;
}