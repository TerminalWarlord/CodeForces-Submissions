#include<stdio.h>
int main()
{
    int n, i, k, j, a, ttl=0, lol[100];
    scanf("%d%d\n", &n, &k);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &lol[i]);
        if(i==k)
        {
            j = lol[i];
        }


    }
    for(i=1; i<=n; i++)
    {
        if(lol[i]>=j)
        {
            if(lol[i]>0)
            {
                ttl = ttl + 1;
            }

        }


    }

    printf("%d", ttl);
    return 0;
}