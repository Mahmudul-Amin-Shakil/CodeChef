#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int s = n * 10;
        printf("%d\n", s);
    }
    return 0;
}