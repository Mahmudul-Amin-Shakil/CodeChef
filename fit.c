#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, z;
        scanf("%d", &x);
        z = x * 10;
        printf("%d\n", z);
    }
    return 0;
}