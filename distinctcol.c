#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], i, max;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        max = arr[0];
        for (i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        printf("%d\n", max);
    }
    return 0;
}