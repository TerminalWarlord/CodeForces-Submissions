#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef map<char,char> mc;
typedef vector<pair<int, int>> vip;
typedef vector<pair<ll, ll>> vlp;
typedef vector<pair<char, char>> vcp;
typedef set<int> si;
typedef set<string> ss;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define tc int t; cin>>t; while(t--)
#define sfi(x) scanf("%d", &x)
#define pfi(x) printf("%d", x)
#define sfl(x) scanf("%lld", &x)
#define pfl(x) printf("%lld", x)
#define sfti(x, y) scanf("%d%d", &x, &y)
#define pfti(x, y) printf("%d%d", x, y)
#define sftl(x, y) scanf("%lld%lld", &x, &y)
#define pftl(x, y) printf("%lld%lld", x, y)
#define PB push_back
#define PO pop_back
#define MP make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
#define VLP(a) for(ll& x:a)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a) for(int i=a; i>=0; i--)
#define MITR(x) for(auto itr=x.begin(); itr!=x.end(); ++itr)
#define nl printf("\n")
#define F first
#define S second
#define ta " "

int main()
{
    FAST_IO;
    // tc
    // {
        string ss;
        cin>>ss;
        ll nb, ns, nc, pb, ps, pc, m;
        cin>>nb>>ns>>nc>>pb>>ps>>pc>>m;
        int b=0, c=0, s=0;
        REP(i, 0, ss.size()){
            if(ss[i]=='B') b++;
            else if(ss[i]=='S') s++;
            else c++;
        }
        ll l=0, r=1e15, ans=0;
        while(l<=r){
            ll mid=(l+r)/2;
            ll x=max(0ll, b*mid-nb);
            ll y=max(0ll, s*mid-ns);
            ll z=max(0ll, c*mid-nc);
            ll cost=x*pb+y*ps+z*pc;
            if(cost>m) r=mid-1;
            else ans=mid, l=mid+1;
        }
        cout<<ans<<endl;
    // }
    return 0;
}