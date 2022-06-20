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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0, cnt0=0;
    REP(i, 0, n){
        if(s[i]=='1'){
            cnt1++;
        }
        else{
            cnt0++;
        }
    }
    cout<<abs(cnt1-cnt0)<<endl;
    return 0;
}