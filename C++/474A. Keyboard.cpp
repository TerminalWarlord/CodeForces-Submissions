#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<b; i++)
#define REP(j, a, b) for(int j=a; j<b; j++)
void rearrange(int t);
int main()
{
    FAST_IO;
    char ch;
    cin>>ch;
    int t=1;
    if(ch=='R'){
        t=-1;
    }
    rearrange(t);
    return 0;
}

void rearrange(int t)
{
    string a,b,c,d;
    a = "qwertyuiop";
    b = "asdfghjkl;";
    c = "zxcvbnm,./";
    cin>>d;
    if(t==-1){
        REP(i, 0, d.size()){
            if(a.find(d[i])<30){
                cout<<a[a.find(d[i])-1];
            }
            else if(b.find(d[i])<30){
                cout<<b[b.find(d[i])-1];
            }
            else{
                cout<<c[c.find(d[i])-1];
            }
        }
    }
    else{
        REP(i, 0, d.size()){
            if(a.find(d[i])<30){
                cout<<a[a.find(d[i])+1];
            }
            else if(b.find(d[i])<30){
                cout<<b[b.find(d[i])+1];
            }
            else{
                cout<<c[c.find(d[i])+1];
            }
        }
    }

}