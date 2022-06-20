#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<b; i++)
int main()
{
    FAST_IO;
    string s;
    cin>>s;
    bool strt=false;
    REP(i, 0, s.size()){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i += 2;
            if(strt){
                cout<<" ";
            }
            continue;
        }
        else{
            strt = true;
            cout<<s[i];
        }
    }
    return 0;
}