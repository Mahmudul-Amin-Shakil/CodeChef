#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z, p;
        scanf("%d%d%d", &x, &y, &z);
        p = x + y + z;
        if (p >= 100 && x >= 10 && y >= 10 && z >= 10)
        {
            printf("pass\n");
        }
        else
        {
            printf("fail\n");
        }
    }
    return 0;
}