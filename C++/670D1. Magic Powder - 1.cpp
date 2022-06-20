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
    int n,k;
    cin>>n>>k;
    vi a(n), b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    int left=0, right=1e5, ans=0;
    while(left<=right){
        int mid=(left+right)/2;
        vi arr(n);
        ll cost=0;
        REP(i, 0, n){
            cost+=max(0LL, 1LL*(mid*a[i]) - b[i]);
        }
        // cout<<"COost "<<cost<<ta<<"MID "<<ta<<mid<<ta<<left<<ta<<right<<endl;
        if(cost<=k){
            left=mid+1;
            ans=mid;
        }
        else right=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}