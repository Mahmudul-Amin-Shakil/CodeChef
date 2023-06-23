#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int x,y;
        scanf ("%d",&x);
        y=100-x;
        printf ("%d\n",y);
    }
    return 0;
}