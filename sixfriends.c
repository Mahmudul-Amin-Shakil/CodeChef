#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x * 3 >= y * 2)
        {
            printf("%d\n", y * 2);
        }
        else
        {
            printf("%d\n", x * 3);
        }
    }
    return 0;
}