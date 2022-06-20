#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    string ch1, ch2;
    cin>>ch1;
    cin>>ch2;
    for(i=0; i<ch1.size(); i++)
    {
        if(ch1[i]<92)
        {
            ch1[i] += 32;
        }
        if(ch2[i]<92)
        {
            ch2[i] += 32;
        }
    }
    if(ch1>ch2)
    {
        cout<<"1";
    }
    else if(ch1<ch2)
    {
        cout<<"-1";
    }
    else if(ch1==ch2)
    {
        cout<<"0";
    }
    return 0;
}