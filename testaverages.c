#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if ((x + y) / 2 >= 35 && (x + z) / 2 >= 35 && (z + y) / 2 >= 35)
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