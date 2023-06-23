#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int following, follower;
    while (n--)
    {
        scanf("%d %d", &following, &follower);
        if (following > 10 * follower)
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