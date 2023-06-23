#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x > 20)
        {
            printf("hot\n");
        }
        else
        {
            printf("cold\n");
        }
    }
    return 0;
}