#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        printf ("%d\n",x-(x/5));
    }
    return 0;
}