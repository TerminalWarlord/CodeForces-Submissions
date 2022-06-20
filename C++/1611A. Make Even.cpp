#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef map<char,char> mc;
typedef set<int> si;
typedef set<string> ss;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define tc int t; cin>>t; while(t--)
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
#define REQ(i, a) for(int i=a; i>=0; i--)
#define MITR(x) for(auto itr=x.begin(); itr!=x.end(); ++itr)
#define nl printf("\n")
#define F first
#define S second
#define ta " "

int main()
{
    FAST_IO;
    tc{
        string s;
        cin>>s;
        ll flag=0;
        if((int(s[s.size()-1])-48)%2==0){
            cout<<0<<endl;
            continue;
        }
        else if((int(s[0])-48)%2==0){
            cout<<1<<endl;
            continue;
        }
        else{
            REP(i, 0, s.size()){
                if((int(s[s.size()-i-1])-48)%2==0){
                    flag++;
                    break;
                }
            }
        }
        if(flag) cout<<2<<endl;       
        else cout<<-1<<endl;
    }
    return 0;
}