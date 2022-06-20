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
    string s;
    cin>>s;
    cout<<s;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    return 0;
}