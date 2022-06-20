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
#define VLP(a) for(int& x:a)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a) for(int i=a; i>=0; i--)
#define MITR(x) for(auto itr=x.begin(); itr!=x.end(); ++itr)
#define nl printf("\n")
#define F first
#define S second
#define ta " "

bool isprime(int n)
{
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    FAST_IO;
    tc
    {
        int n;
        cin>>n;
        vi a(n);
        int sum=0;
        VLP(a) cin>>x, sum+=x;
        if(isprime(sum)==false){
            cout<<n<<endl;
            REP(i, 0, n) cout<<i+1<<" ";
            cout<<endl;
            continue;
        }
        int odd=-1;
        for(int x:a){
            if(x&1){
                odd=x;
                break;
            }
        }
        cout<<n-1<<endl;
        REP(i, 0, n){
            if(a[i]!=odd) cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}