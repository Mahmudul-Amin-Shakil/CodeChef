#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        int p, q;
        scanf("%d%d", &p, &q);
        if ((p >= x) && (q >= y))
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}