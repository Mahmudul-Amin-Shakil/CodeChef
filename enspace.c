#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y, z;
        scanf("%d%d%d", &n, &x, &y);
        z = x + y * 2;
        if (n >= z)
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