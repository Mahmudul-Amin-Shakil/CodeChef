#include <stdio.h>
int main()
{
    int test, i, j, x, y, fe, ma;
    scanf("%d", &test);
    for (j = 1; j <= test; j++)
    {
        scanf("%d%d", &x, &y);
        if (x > y)
        {
            i = 1;
            while (i <= 10)
            {
                if (x >= (10 * (i - 1) + 1) && x <= (10 * i))
                {
                    ma = i;
                    i++;
                }
                else
                    i++;
            }
            i = 1;
            while (i <= 10)
            {
                if (y >= (10 * (i - 1) + 1) && y <= (10 * i))
                {
                    fe = i;
                    i++;
                }
                else
                    i++;
            }
            printf("%d\n", (ma - fe));
        }
        else if (y > x)
        {
            i = 1;
            while (i <= 10)
            {
                if (x >= (10 * (i - 1) + 1) && x <= (10 * i))
                {
                    ma = i;
                    i++;
                }
                else
                    i++;
            }
            i = 1;
            while (i <= 10)
            {
                if (y >= (10 * (i - 1) + 1) && y <= (10 * i))
                {
                    fe = i;
                    i++;
                }
                else
                    i++;
            }
            printf("%d\n", (fe - ma));
        }
        else
            printf("%d\n", 0);
    }
    return 0;
}