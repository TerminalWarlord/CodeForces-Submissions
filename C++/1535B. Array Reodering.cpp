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
#define VLP(a) for(int x:a) cout<<x;
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
    tc
    {
        int n;
        cin>>n;
        vi e, o;
        REP(i, 0, n){
            int tmp;
            cin>>tmp;
            if(tmp&1) o.PB(tmp);
            else e.PB(tmp);
        }
        int count=0, j=1;
        REP(i, 0, e.size()){
            count+=n-j;
            j++;
        }
        REP(i, 0, o.size()){
            REP(j, i+1, o.size()){
                if(__gcd(o[i], o[j]*2)>1){
                    count++;
                }
            }
        }
        cout<<count<<endl; 
    }

    return 0;
}