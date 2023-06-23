#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x < 10)
        {
            printf("Thanks for helping Chef!\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}