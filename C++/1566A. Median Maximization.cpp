#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i=0;
    cin>>t;
    for(i=0; i<t; i++){
        long long n, s, j;
        cin>>n>>s;
        j = n/2 + 1;
        j = s/j;
        cout<<j<<endl;
    }
    return 0;
}