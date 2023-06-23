#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double x, y;
        scanf("%lf%lf", &x, &y);
        if ((y / x) >= 0.5)
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