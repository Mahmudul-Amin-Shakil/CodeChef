#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x < 4)
        {
            printf("mild\n");
        }
        else if (x >= 4 && x < 7)
        {
            printf("medium\n");
        }
        else
        {
            printf("hot\n");
        }
    }
    return 0;
}