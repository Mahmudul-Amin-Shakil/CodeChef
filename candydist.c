#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x % y == 0 && (x / y) % 2 == 0)
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