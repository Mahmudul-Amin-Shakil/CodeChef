#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, p;
        scanf("%d%d", &x, &y);
        p = (x * y) / 100;
        printf("%d\n", p);
    }
    return 0;
}