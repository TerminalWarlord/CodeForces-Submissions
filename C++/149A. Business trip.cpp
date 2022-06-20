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
#define VLP(a) for(int& x:a)
#define REP(i, a, b) for(int i=a; i<b; i++)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a) for(int i=a; i>=0; i--)
#define nl printf("\n")
#define F first
#define S second


int main()
{
    FAST_IO;
    int k;
    cin>>k;
    vi a(12);
    VLP(a){
        cin>>x;
    }
    sort(a.begin(), a.end());
    int sum = 0, count = 0, minmonth=INT_MAX;
    REQ(i, 11){
        if(sum<k){
            count++;
            sum+=a[i];
        }
    }
    if(sum>=k){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}