#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double a, b, c, d, x, y;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        x = a / c;
        y = b / d;
        if (x == y)
        {
            printf("both\n");
        }
        else if (x > y)
        {
            printf("chefina\n");
        }
        else
        {
            printf("chef\n");
        }
    }
    return 0;
}