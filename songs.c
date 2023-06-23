#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    while (n--)
    {
         int x, y;
        scanf("%d%d", &y, &x);
        printf("\n%d", (y / (3 * x)));
    }
    return 0;
}