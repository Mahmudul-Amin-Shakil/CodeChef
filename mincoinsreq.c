#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d", &x);
        y = x % 10;
        printf("%d\n", y);
    }
    return 0;
}