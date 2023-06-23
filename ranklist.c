#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d", &x);
        if (x % 25 == 0)
        {
            printf("%d\n", x / 25);
        }
        else
        {
            y = (x / 25) + 1;
            printf("%d\n", y);
        }
    }
    return 0;
}