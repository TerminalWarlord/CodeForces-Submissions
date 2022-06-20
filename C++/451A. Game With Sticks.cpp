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
    int n, m;
    cin>>n>>m;
    int flag=min(n, m);
    if(flag&1){
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }
    return 0;
}