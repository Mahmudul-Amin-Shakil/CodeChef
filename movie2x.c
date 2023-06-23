#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (y % 2 == 0)
    {
        printf("%d\n", x - (y / 2));
    }
    return 0;
}