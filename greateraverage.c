#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double x, y, z;
        scanf("%lf%lf%lf", &x, &y, &z);
        if (((x + y) / 2) > z)
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