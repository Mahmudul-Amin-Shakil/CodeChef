#include <stdio.h>
int main()
{
    int n, t, res, last;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        last = n % 10;
        while (n > 0)
        {
            res = n % 10;
            n = n / 10;
        }
        printf("%d\n", last + res);
    }
}