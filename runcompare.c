#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i;
        scanf("%d", &n);
        int arr1[n], arr2[n];
        int cnt = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
            {
                if (arr1[i] <= 2 * arr2[i])
                {
                    cnt++;
                }
            }
            if (arr1[i] < arr2[i])
            {
                if (2 * arr1[i] >= arr2[i])
                {
                    cnt++;
                }
            }
            else
            {
                cnt++;
            }
        }
        printf("%d\n", cnt/2);
    }
    return 0;
}