#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, t, i;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for(int i=0; i<n; i++){
            if(s[i] == 'B' &&s[i+1] == 'G'){
                s[i+1] = 'B';
                s[i] = 'G';
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}