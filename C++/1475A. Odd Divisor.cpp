#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(ll i=a; i<=b; i++)

bool div(ll n);
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(div(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

bool div(ll n)
{
    while(n%2==0){
        n /= 2;
    }
    if(n!=1){
        return true;
    }
    else{
        return false;
    }
}