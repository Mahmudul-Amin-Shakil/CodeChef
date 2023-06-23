#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int x,p,q,a;
        scanf ("%d%d%d",&x,&p,&q);
        a=(p-q)*x;
        printf ("%d\n",a);
    }
    return 0;
}