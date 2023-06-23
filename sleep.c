#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int x;
    while (t--)
    {
        scanf("%d", &x);
        if (x < 7)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}