#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x <= 50)
        {
            printf("left\n");
        }
        else if (x<=100)
        {
            printf("right\n");
        }
    }
    return 0;
}