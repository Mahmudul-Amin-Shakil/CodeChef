#include <stdio.h>
int main(void)
{
    int T, X, Y, time;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        time = Y - X;
        printf("%d\n", time);
    }
    return 0;
}