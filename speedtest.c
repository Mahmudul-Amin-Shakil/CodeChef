#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double w, x, y, z;
        scanf("%lf%lf%lf%lf", &w, &x, &y, &z);
        if (w / x == y / z)
        {
            printf("equal\n");
        }
        else if (w / x > y / z)
        {
            printf("alice\n");
        }
        else
        {
            printf("bob\n");
        }
    }
    return 0;
}