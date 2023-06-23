#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int z = a + c * d;
        if (b < z)
        {
            printf("overFlow \n");
        }
        else if (b > z)
        {
            printf("Unfilled\n");
        }
        else
            printf("filled\n");
    }
    return 0;
}