#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if ((w + y == 180) && (x + z == 180))
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