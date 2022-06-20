#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int i, j, y = 0;
    cin>>s;
    cin>>t;
    for(i=0; i<s.size(); i++){
        if(s[i]==t[t.size()-1-i]){
            y++;
        }
    }
    if(y==s.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}