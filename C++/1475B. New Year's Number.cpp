#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<=b; i++)
#define RER(j, a, b) for(int j=a; j<b; j++)
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int y = n%2020;
        int x = ((n-y)/2020)-y;
        if((x*2020)+(y*2021)==n&&x>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}