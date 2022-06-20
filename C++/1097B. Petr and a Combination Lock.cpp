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
#define PB push_back
#define PO pop_back
#define MP make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
#define VLP(a) for(int& x:a)
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
    int n;
    cin>>n;
    vi a(n);
    VLP(a) cin>>x;
    bool flag=false;
    REP(i, 0, (1<<n)){
        int sum=0;
        // cout<<i<<endl;
        REP(bits, 0, n){
            if(i&(1<<bits)) sum+=a[bits];
            else sum-=a[bits];
        }
        if(sum%360==0){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}