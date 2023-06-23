#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, p;
        scanf("%d", &x);
        p = 100 - x;
        printf("%d\n", p);
    }
    return 0;
}