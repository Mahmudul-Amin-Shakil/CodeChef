#include<stdio.h>
int main()
{
    int t;
    scanf ("%d",&t);
    while (t--)
    {
        int x;
        scanf ("%d",&x);
        if (x>30)
        {
            printf ("yes\n");
        }
        else
        {
            printf ("no\n");
        }
    }
    return 0;
}