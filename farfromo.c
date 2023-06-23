#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, x, y, z;
        scanf("%d%d%d%d", &w, &x, &y, &z);
        if ((sqrt(w * w + x * x)) > (sqrt(y * y + z * z)))
        {
            printf("alex\n");
        }
        else if ((sqrt(w * w + x * x)) < (sqrt(y * y + z * z)))
        {
            printf("bob\n");
        }
        else
        {
            printf("equal\n");
        }
    }
    return 0;
}