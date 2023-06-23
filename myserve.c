#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d", &x, &y);
        z = x + y;
        if (z % 4 == 2 || z % 4 == 3)
        {
            printf("bob\n");
        }
        else
        {
            printf("alice\n");
        }
    }
    return 0;
}