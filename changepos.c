#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if (w != y && x != z)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}