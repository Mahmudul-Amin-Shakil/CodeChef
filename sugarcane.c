#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, p, q;
        scanf("%d", &x);
        p = (x * 50);
        q = p - (p * .2 + p * .2 + p * .3);
        printf("%d\n", p);
    }
    return 0;
}