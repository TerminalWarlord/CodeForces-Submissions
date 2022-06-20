#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    long long n, a, i;
    cin>>n>>a;
    if(n&1){
        if(a==n/2 +1){
            cout<<n;
        }
    	else if(a<=n/2){
            i = a*2 - 1;
            cout<<i;
        }
        else{
        	i = 2*(a-(n/2)-1);
        	cout<<i;
        }
    }
    else{
        if(a<=n/2){
            i = a*2 - 1;
            cout<<i;
        }
        else{
        	i = 2*(a -(n/2));
        	cout<<i;
        }
    }
    cout<<endl;
    return 0;
}