#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (x * y < 0 || y * z < 0 || x * z < 0)
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