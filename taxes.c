#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x > 100)
        {
            printf("%d\n", x - 10);
        }
        else
        {
            printf("%d\n", x);
        }
    }
    return 0;
}