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
    int n, m, dif;
    cin>>n>>m;
    vi a(m);
    for(int& x:a){
        cin>>x;
    }
    sort(a.begin(), a.end());
    dif = abs(a[0]-a[n-1]);
    REP(i, 1, m-n+1){
        if(abs(a[i]-a[n+i-1])<dif){
            dif = abs(a[i]-a[n+i-1]);
        }
    }
    cout<<dif<<endl;
    return 0;
}