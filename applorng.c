#include <stdio.h>
int main()
{
    int p;
    scanf("%d\n", &p);
    int x,y,z;
    scanf("%d%d", &x,&y);
    z=x+y;
    if (p>=z)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}