#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        a = w + ((x - y) * z);
        printf("%d\n",a);
    }
    return 0;
}