#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<int,int> mc;
typedef vector<pair<int, int>> vip;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define tc int t; cin>>t; while(t--)
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
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return 0;
    }
    int count=0;
    while(n!=0){
        count++;
        n=n>>1;
    }
    ll ans=0;
    while(count){
        ans+=pow(1*2*1LL, count-1);
        count--;
    }
    cout<<ans<<endl;
    return 0;
}