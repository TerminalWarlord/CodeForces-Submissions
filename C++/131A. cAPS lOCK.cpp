#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cl = 0, sl = 0;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])||(islower(s[i])&&s.size()==1)){
            cl++;
        }
        if(islower(s[i])&&i>0||(isupper(s[i])&&s.size()==1)){
            sl++;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(sl>0&&sl!=s.size()){
            cout<<s[i];
        }
        else if(cl==s.size()&&s.size()>1){
            char ch;
            ch=tolower(s[i]);
                cout<<ch;
        }
        else if(cl>0&&sl==0){
            char ch;
            if(islower(s[i])&&i==0){
                ch=toupper(s[i]);
                cout<<ch;
            }
            else if(isupper(s[i])&&i>0){
                ch=tolower(s[i]);
                cout<<ch;
            }
            else{
                cout<<s[i];
            }
        }
        else{
            char ch;
            ch = tolower(s[i]);
            cout<<ch;
        }
    }
    return 0;
}