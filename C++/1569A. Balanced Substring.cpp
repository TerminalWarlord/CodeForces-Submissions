#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, j;
        bool flag=false;
        cin>>n;
        string s;
        cin>>s;
        for(j=0; j<n-1; j++){
            if(s[j]!=s[j+1]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<j+1<<" "<<j+2<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}