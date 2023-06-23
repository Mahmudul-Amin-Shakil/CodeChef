#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d",&x, &y,&z);
        if (x>y && x>z)
        {
            printf("alice\n");
        }
        else if (y>x && y>z)
        {
            printf("bob\n");
        }
        else
        {
            printf("charlie\n");
        }
    }
    return 0;
}