#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
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
#define RER(i, a, b) for(int i=a; i<b; i++)
#define REQ(i, a, b) for(int i=a; i>=0; i--)
#define nl printf("\n")

int main()
{
    FAST_IO;
    ll n;
    cin>>n;
    ll tmp=n, d=0;
    if(n<=9){
        cout<<n<<endl;
        return 0;
    }
    else{
        while(tmp>0){
            tmp/=10;
            d+=1;
        }
        ll ans = 0, lol=10, lol2=1;
        REP(i, 1, d){
            ans += i*(lol-lol2);
            lol2 = lol;
            lol *= 10;
        }
        ans += d*(n-lol2+1);
        cout<<ans<<endl;
    }
    return 0;
}