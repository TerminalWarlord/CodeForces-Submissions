#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int n, k, s=0, a=0;
    cin>>n>>k;
    k = 240 - k;
    for(int i=1; i<=n; i++){
        if(s+(i*5)<=k){
            s += i*5;
            a++;
        }
        else{
            break;
        }
    }
    cout<<a<<"\n";
    return 0;
}