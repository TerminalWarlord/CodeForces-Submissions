#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, r, i, mod;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>l>>r;
        if(r/2+1>=l)
        {
            mod = r%(r/2+1);
        }
        else
        {
            mod = -(l-r);
        }
        cout<<mod<<endl;

    }
    return 0;
}