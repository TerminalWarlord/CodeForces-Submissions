#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    string s;
    bool flag=false;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}