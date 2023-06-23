#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int x,z;
        scanf ("%d",&x);
        z=(x*60)/20;
        printf ("%d\n",z);
    }
    return 0;
}