#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        if (i + j == k || j + k == i || k + i == j)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}