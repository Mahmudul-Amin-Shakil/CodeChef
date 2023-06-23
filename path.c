#include <stdio.h>
int main()
{
    int a1, b1;
    scanf("%d%d", &a1, &b1);
    int a2, b2;
    scanf("%d%d", &a2, &b2);
    int a3, b3;
    scanf("%d%d", &a3, &b3);
    int i;
    if (1 <= a1 && b1 <= 4)
    {
        for (i=1;1<=i<=3;i++)
        {
            printf("yes\n");
        }
    }
    else
    {
        printf("no\n");
    }
    return 0;
}