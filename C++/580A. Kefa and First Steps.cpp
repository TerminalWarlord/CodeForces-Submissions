#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"

int main()
{
    FAST_IO;
    int n, count=0, tmp=0;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0; i<n; i++){
        cin>>a[i];
        if(i>0&&a[i]>=a[i-1]){
            count++;
            tmp = max(tmp, count);
        }
        else{
            count = 1;
            tmp = max(tmp, count);
        }
    }
    cout<<tmp<<endl;
    return 0;
}