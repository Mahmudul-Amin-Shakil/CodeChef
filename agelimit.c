#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, a;
        scanf("%d%d%d", &x, &y, &a);
        if (a >= x && a < y)
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