#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sfi(x) scanf("%d", &x)
#define pfi(x) printf("%d\n", x)
#define sfl(x) scanf("%lld", &x)
#define pfl(x) printf("%lld", x)
#define sfti(x, y) scanf("%d%d", &x, &y)
#define pfti(x, y) printf("%d%d", x, y)
#define sftl(x, y) scanf("%lld%lld", &x, &y)
#define pftl(x, y) printf("%lld%lld", x, y)
#define PB push_back
#define PO pop_back
#define MP make_pair
#define REP(i, a) for(int i=a; ; i++)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a, b) for(int i=a; i>=0; i--)

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        sfi(n);
        int count=0;
        REP(i, 1){
            if(i%3==0||i%10==3){
                continue;
            }
            else{
                count++;
            }
            if(count==n){
               pfi(i);
                break;
            }
        }
    }
    return 0;
}