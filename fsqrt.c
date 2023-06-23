#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d", &x);
        y = sqrt(x);
        printf("%d\n", y);
    }
    return 0;
}