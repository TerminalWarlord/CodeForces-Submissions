#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; b!=0 ; i++)
int main()
{
    FAST_IO;
    int n, m;
    cin>>n>>m;
    int sum1=n, flag;
    REP(i, 1, sum1){
        if(i%m==0){
            sum1 += 1;
        }
        sum1 -= 1;
        flag = i;
    }
    cout<<flag<<endl;
}