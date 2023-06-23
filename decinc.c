#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("%d\n", x + 1);
    }
    else
    {
        printf("%d\n", x - 1);
    }
    return 0;
}