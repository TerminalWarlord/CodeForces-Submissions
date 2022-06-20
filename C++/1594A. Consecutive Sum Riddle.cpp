#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<b; i++)
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<(n-1)*-1<<" "<<n<<endl;
    }
    return 0;
}