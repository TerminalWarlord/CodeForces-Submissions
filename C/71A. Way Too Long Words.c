#include<stdio.h>
#include<string.h>
int main()
{
    int n, b, i;
    char ch[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", &ch);
        b = strlen(ch);
        if(b>10)
        {
            printf("%c%d%c\n", ch[0], b-2, ch[b-1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }
    return 0;
}