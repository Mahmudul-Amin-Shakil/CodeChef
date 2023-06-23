#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, p, q;
        scanf("%d", &x);
        p = (x * 10);
        printf("%d\n", p);
    }
    return 0;
}