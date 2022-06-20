#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long h;
        cin>>n>>h;
        vector<long long> a;
        for(int i=0; i<n; i++){
            long long tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        long long sum=a[n-1] + a[n-2], x;
        int count;
        if(h%sum==0){
            count = (h/sum)*2;
        }
        else if(h%sum<=a[n-1]){
            count = ((h/sum)*2)+1;
        }
        else{
            count = ((h/sum)*2)+2;
        }
        cout<<count<<endl;
    }
    return 0;
}