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
        long long sum=1, j=1, ans;
        while(true){
            sum += pow(2, j);
            if(n%sum==0){
                ans = n/sum;
                break;
            }
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}