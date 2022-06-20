#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cin.tie(0);
int main()
{
    FAST_IO;
    int k, r, i;
    cin>>k>>r;
    if(r%k==0){
        i = r/k;
    }
    else{
        for(i=1; ; i++){
            if(k*i%10==0||k*i%10==r){
                break;
            }
        }
    }

    cout<<i<<"\n";
    return 0;
}