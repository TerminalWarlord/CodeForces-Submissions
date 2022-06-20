#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t, n, i, j, k, len;
    char ch[100];
    cin>>t;
    for(i=0; i<t; i++)
    {

        cin>>n;
        cin>>ch;
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
        cout<<ch<< "\n";
    }
    return 0;
}