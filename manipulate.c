#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x >= y)
        {
            printf("yes\n",x-y);
        }
        else
        {
            printf("no\n",y-x);
        }
    }
    return 0;
}