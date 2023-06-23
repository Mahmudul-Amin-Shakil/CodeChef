#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (100 * x >= 10 * y)
        {
            printf("cloth\n");
        }
        else
        {
            printf("disposable\n");
        }
    }
    return 0;
}