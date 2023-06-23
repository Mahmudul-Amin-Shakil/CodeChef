#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t-- > 0)
    {
        int pa, pb, qa, qb, p_bigg, q_bigg;
        scanf("%d%d", &pa, &pb);
        scanf("%d%d", &qa, &qb);
        if (pa >= pb)
        {
            p_bigg = pa;
        }
        else
        {
            p_bigg = pb;
        }
        if (qa >= qb)
        {
            q_bigg = qa;
        }
        else
        {
            q_bigg = qb;
        }
        if (p_bigg < q_bigg)
        {
            printf("P\n");
        }
        else if (q_bigg < p_bigg)
        {
            printf("Q\n");
        }
        else
        {
            printf("TIE\n");
        }
    }
    return 0;
}