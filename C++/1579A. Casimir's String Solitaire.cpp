#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        int a=0, b=0, c=0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='A'){
                a++;
            }
            else if(s[j]=='B'){
                b++;
            }
            else{
                c++;
            }
        }
        if(b-c==a&&b!=0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}