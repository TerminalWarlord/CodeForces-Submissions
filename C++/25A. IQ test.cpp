#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define REP(i, a, b) for(int i=a; i<b; i++)
int main()
{
    FAST_IO;
    int n, count=0;
    cin>>n;
    vi a(n);
    REP(i, 0, n){
        cin>>a[i];
        if(a[i]&1){
            count++;
        }
    }
    if(count==1){
         REP(i, 0, n){
              if(a[i]&1){
                  cout<<i+1;
                  break;           
              }
         }
    }
    else{
        REP(i, 0, n){
              if(a[i]&1){
                  continue; 
              }
              else{
                 cout<<i+1;
                  break;          
             }
         }
    }
    cout<<endl;
    return 0;
}