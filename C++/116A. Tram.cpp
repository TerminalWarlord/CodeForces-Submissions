#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b, rem=0, mp=0;
    cin>>n;
    i = 0;
    while(i<n){
        cin>>a>>b;
        rem = rem - a + b;
        if(mp<=rem){
            mp = rem;
        }
        i++;
    }
    cout<<mp;
    return 0;
}