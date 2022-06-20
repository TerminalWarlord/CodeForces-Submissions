#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<b; i++)
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        string a, b;
        cin>>n;
        bool count=false;
        cin>>a;
        cin>>b;
        REP(i, 0, n){
            if(a[i]=='1'&&b[i]=='1'||a[i]=='1'&&b[i]=='1'){
                count = true;
            }
        }
        if(count){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}