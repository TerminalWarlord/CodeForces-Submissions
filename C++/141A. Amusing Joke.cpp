#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, u;
    cin>>s;
    vector<char> a;
    for(int i=0; i<s.size(); i++){
        a.push_back(s[i]);
    }
    cin>>t;
    for(int i=0; i<t.size(); i++){
        a.push_back(t[i]);
    }
    cin>>u;
    int vecsize = a.size();
    for(int i=0; i<u.size(); i++){
        for(int l=0; l<a.size(); l++){
            if(u[i]==a[l]){
                a.erase(a.begin()+l);
                break;
            }
        }
    }
    if(a.size()==0&&vecsize==u.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}