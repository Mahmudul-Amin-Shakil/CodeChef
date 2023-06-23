#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, sum = 0;
        scanf("%d", &x);
        while (x > 0)
        {
            y = x % 10;
            x = x / 10;
            sum = sum + y;
        }
        printf("%d\n", sum);
    }
    return 0;
}