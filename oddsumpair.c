#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if ((x + y) % 2 != 0)
        {
            printf("yes\n");
        }
        else if ((z + y) % 2 != 0)
        {
            printf("yes\n");
        }
        else if ((x + z) % 2 != 0)
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