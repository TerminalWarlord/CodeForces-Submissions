#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = 0, k;
    for(int i=0; i<s.size()-1; i++){
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]&&i!=j){
                l++;
                break;
            }
        }

    }
    k = s.size() - l;
    if(k%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}