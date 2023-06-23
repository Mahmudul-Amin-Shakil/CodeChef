#include <stdio.h>
int main()
{
    int n, arr[100];
    int i, ready = 0, notready = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            ready++;
        else
            notready++;
    }
    if (ready > notready)
    {
        printf("READY FOR BATTLE");
    }
    else
    {
        printf("NOT READY");
    }
    return 0;
}