#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if (w == x || w == y || w == z)
        {
            printf("yes\n");
        }
        else if (w == x + y || w == x + z || w == y + z || w == x + y + z)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}