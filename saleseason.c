#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x <= 100)
        {
            printf("%d\n",x);
        }
        else if ((100 < x) && (x <= 1000))
        {
            printf("%d\n", x - 25);
        }
        else if ((1000 < x) && (x <= 5000))
        {
            printf("%d\n", x - 100);
        }
        else if (5000 < x)
        {
            printf("%d\n", x - 500);
        }
    }
    return 0;
}