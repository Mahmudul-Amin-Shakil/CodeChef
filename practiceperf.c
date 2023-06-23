#include <stdio.h>
int main()
{
    int x, y, z, p, ans;
    scanf("%d%d%d%d", &x, &y, &z, &p);
    ans = (x >= 10) + (y >= 10) + (z >= 10) + (p >= 10);
    printf ("%d\n",ans); 
    return 0;
}