#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char num[4];
        int flag = 0, i;
        scanf("%s", num);
        for (i = 0; i < strlen(num); i++)
        {
            if (num[i] == '7')
            {
                flag = 1;
            }
        }
        if (flag == 1)
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