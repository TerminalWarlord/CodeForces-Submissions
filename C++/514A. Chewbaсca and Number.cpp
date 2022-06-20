#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='9'&&i==0) continue; 
        if(s[i]>'4') s[i] = 48+'9'-s[i];
    }
    cout<<s<<endl;
}