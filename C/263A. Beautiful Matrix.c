#include<stdio.h>
int main()

{
    int a, r, c, lol=0;
    for(r=1; r<=5; r++)
    {
        for(c=1; c<=5; c++)
        {
            scanf("%d", &a);
            if(a==1&&r>=3)
            {
                lol = r - 3;
            }
            else if(a==1&&r<3)
            {
                lol = 3 - r;
            }
            if(a==1&&c>=3)
            {
                lol = lol + c - 3;
            }
            else if(a==1&&c<3)
            {
                lol = lol + 3 - c;
            }

        }

    }
    printf("%d", lol);
    return 0;
}