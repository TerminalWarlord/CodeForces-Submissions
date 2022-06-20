#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        string s;
        int count=0;
        cin>>s;
        for(int j=0; j<s.size(); j++){
            if(s[s.size()-1]!='0'){
                count = count + (int(s[s.size()-1])- 48);
                s[s.size()-1] = '0';
            }
            if(s[j]!='0'){
                count = count + 1 + (int(s[j])- 48);
            }
        }
        cout<<count<<endl;
    }

    return 0;
}