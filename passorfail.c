#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if (((y * 3) - (x - y)) >= z)
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