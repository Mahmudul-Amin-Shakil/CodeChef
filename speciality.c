#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if ((x > y) && (x > z))
        {
            printf("setter\n");
        }
        else if ((y > x) && (y > z))
        {
            printf("tester\n");
        }
        else
        {
            printf("editorialist\n");
        }
    }
    return 0;
}