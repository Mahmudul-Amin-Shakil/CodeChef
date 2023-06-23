#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, temp;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d %d", &b, &c);
        int half = pow(2, c);
        for (int i = 0; i < b; i++)
        {
            half = half / 2;
        }
        printf("%d\n", half);
    }
    return 0;
}