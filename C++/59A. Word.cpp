#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin>>s;
    int l, i, ca=0, sm=0;
    l = s.size();
    for(int i = 0; i<l; i++){
        if(int(s[i])<96){
            ca++;
        }
        else{
            sm++;
        }
    }
    if(sm<ca){
        for(int i = 0; i<l; i++){
            if(int(s[i])>92){
                p = s[i] - 32;
            }
            else{
                p = s[i];
            }
            cout<<p;
        }
    }
    else{
        for(int i = 0; i<l; i++){
            if(int(s[i])<92){
                p = s[i] + 32;
            }
            else{
                p = s[i];
            }
            cout<<p;

        }
    }
    return 0;
}