#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef map<char,char> mc;
typedef vector<pair<char, char>> vcp;
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
#define VLP(a) for(int& x:a)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a, b) for(int i=a; i>=0; i--)
#define nl printf("\n")
#define F first
#define S second


int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        REP(i, 0, n){
            cout<<char(97+i%b);
        }
        cout<<endl;
    }
    return 0;
}