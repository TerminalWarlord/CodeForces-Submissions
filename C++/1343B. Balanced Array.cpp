#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        long long e, o;
        e=(n/2)*((n/2)+1);
        o=((n/2)-1)*((n/2)-1);
        if((e-o)&1){
            cout<<"YES"<<endl;
            long long j, even=2, odd=1;
            for(j=1; j<n; j++){
                if(j<=n/2){
                    cout<<even<<" ";
                    even += 2;
                }
                else{
                    cout<<odd<<" ";
                    odd += 2;
                }
            }
            cout<<e-o<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}