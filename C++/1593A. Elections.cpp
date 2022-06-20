#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sf scanf
#define pf printf
#define PB push_back
#define PO pop_back
#define MP make_pair
#define REP(i, a, b) for(int i=a; i<b; i++)
#define RER(i, a, b) for(int i=a; i<=b; i++)
#define REQ(i, a, b) for(int i=a; i>=0; i--)

int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        if(a==b&&b==c){
            cout<<1<<" "<<1<<" "<<1<<endl;
            continue;
        }
        ll mx = max(max(a,b), c)+1;
        a = mx-a;
        b = mx-b;
        c = mx-c;
        if(a==1&&b!=1&&c!=1){
            a = 0;
        }
        else if(b==1&&a!=1&&c!=1){
            b=0;
        }
        else if(c==1&&b!=1&&a!=1){
            c=0;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}