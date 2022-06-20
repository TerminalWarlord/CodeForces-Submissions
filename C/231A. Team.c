#include<stdio.h>
int main()
{
    int n, i, a, b, c, ttl=0;
    scanf("%d\n", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if((a + b + c)>1)
        {
            ttl = ttl + 1;
        }
    }

    printf("%d", ttl);
    return 0;
}