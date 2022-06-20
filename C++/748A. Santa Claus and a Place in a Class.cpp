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
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a, b) for(int i=a; i>=0; i--)
#define nl printf("\n")

int main()
{
    FAST_IO;
    int n, m,k;
    cin>>n>>m>>k;
    int l, d;
    char a;
    if(k&1) a = 'L'; 
    else a = 'R'; 
    k = (k-1)/2;
    l=k/m + 1;
    d=k%m + 1;
    cout<<l<<" "<<d<<" "<<a<<endl;
    return 0;
}