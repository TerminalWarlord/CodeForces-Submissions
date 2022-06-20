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
        int n, x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        else if((n-2)%x==0){
            n = ((n-2)/x)+1;
        }
        else{
            n = ((n-2)/x)+2;
        }
        cout<<n<<endl;
    }
    return 0;
}