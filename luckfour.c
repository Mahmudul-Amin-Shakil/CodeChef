#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        while (n)
        {
            int m = (n % 10);
            if (m == 4)
                count++;
            n /= 10;
        }
        printf("%d\n", count);
    }
    return 0;
}