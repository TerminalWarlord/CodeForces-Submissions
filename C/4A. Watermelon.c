#include<stdio.h>
int main()
{
    int n, a, b, i=0;
    scanf("%d", &n);
    a = n/2;
    while(i<=n)
    {
        if(n%2!=0||n<=2)
        {
            printf("NO");
            break;
        }
        else if(a%2==0)
        {
            printf("YES");
            break;
        }
        else
        {
            a = a + 1;
            b = n - a;
            if(a%2==0&&b%2==0)
            {
                printf("YES");
                break;
            }
        }
    }
    return 0;
}