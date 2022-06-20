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
    string s;
    cin>>s;
    if(s[0]=='-'){
        s[s.size()-2] = min(s[s.size()-1], s[s.size()-2]);
        s.erase(s.size()-1);
        if(s[1] == '0'){
            s.erase(0, 1);
        }
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}