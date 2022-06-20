#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        vector<char> a;
        cin>>s;
        a.push_back(s[0]);
        for(int j=1; j<s.size()-1; j+=2){
            a.push_back(s[j]);
        }
        a.push_back(s[s.size()-1]);
        for(int j=0; j<a.size(); j++){
            cout<<a[j];
        }
        cout<<"\n";
    }
    return 0;
}