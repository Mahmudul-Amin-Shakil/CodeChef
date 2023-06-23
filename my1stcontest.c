#include <stdio.h>
int main()
{
    int x, y, z,p,q;
    scanf("%d%d%d", &x, &y,&z);
    p = x - y;
    q=p-z;
    printf("%d %d\n", p,q);
    return 0;
}