#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i, sum;
    string s, t;
    cin>>s;
    cin>>t;
    for(i=0; i<s.size(); i++){
        if(s[i]==t[i]){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
    }
    cout<<s<<endl;
    return 0;
}