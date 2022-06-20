#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t, count=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, count=0;
        vector<int> a;
        cin>>n;
        for(int j=0; j<n;j++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int l=1; l<n&&count==0; l++){
            if(a[l]-a[l-1]>1){
                count++;
            }
        }
        if(count==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    return 0;
}