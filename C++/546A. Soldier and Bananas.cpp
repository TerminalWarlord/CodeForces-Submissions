#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, tc = 0;
    int k, w;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++){
        tc = tc + i*k;
    }
    if(tc>n){
        cout<<tc-n;
    }
    else{
        cout<<0;
    }

    return 0;
}