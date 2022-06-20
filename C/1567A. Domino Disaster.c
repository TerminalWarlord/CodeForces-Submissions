#include<stdio.h>
#include<string.h>
int main()
{
    int t, n, i, j, k, len;
    char ch[100];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        scanf("%s", &ch);
        len = strlen(ch);
        for(j=0; j<len; j++)
        {
            if(ch[j]=='U')
            {
                ch[j] = 'D';
            }

            else if(ch[j]=='D')
            {
                ch[j] = 'U';
            }
        }
        printf("%s\n", ch);

    }

    return 0;
}