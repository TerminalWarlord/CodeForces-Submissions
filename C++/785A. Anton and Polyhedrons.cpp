#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s[0]=='T'){
            f += 4;
        }
        else if(s[0]=='C'){
            f += 6;
        }
        else if(s[0]=='O'){
            f += 8;
        }
        else if(s[0]=='D'){
            f += 12;
        }
        else{
            f += 20;
        }
    }
    cout<<f<<endl;
    return 0;
}