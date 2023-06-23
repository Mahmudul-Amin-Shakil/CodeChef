#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int g,c,x;
        scanf("%d%d", &g, &c);
        x=(c*c)/(2*g);
        printf ("%d\n",x);
    }
    return 0;
}