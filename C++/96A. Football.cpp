#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[100], len, i, j, dan=0;
    cin>>ch;
    len = strlen(ch);
    for(i=0; i<=len; i++)
    {
        if(i>5&&(ch[i]==ch[i-1]&&ch[i]==ch[i-2]&&ch[i]==ch[i-3]&&ch[i]==ch[i-4]&&ch[i]==ch[i-5]&&ch[i]==ch[i-6])&&(i<=len))
        {
            dan = 1;
            break;
        }
    }

    if(dan==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}