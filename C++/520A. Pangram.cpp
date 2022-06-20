#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    string s;
    cin>>n;
    cin>>s;
    int a=97;
    for(int i=0; i<n; i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
        if(int(s[i])==a){
            count++;
            a++;
            i = -1;
        }
        if(count==26){
            break;
        }
    }
    if(count==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}