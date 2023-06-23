#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if ((x % 3)==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",3-(x%3));
        }
    }
    return 0;
}