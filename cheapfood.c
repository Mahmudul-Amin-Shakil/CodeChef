#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x / 10 >= 100)
        {
            printf("%d\n", x / 10);
        }
        else
        {
            printf("%d\n", 100);
        }
    }
    return 0;
}