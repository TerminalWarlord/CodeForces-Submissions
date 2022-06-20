#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s;
    int i, d=0;
    for(i=0;; i++){
        char tmp;
        cin>>tmp;
        if(tmp==' ' ||tmp==',' || tmp=='{' ){
            continue;
        }
        if(tmp=='}'){
            break;
        }
        s.push_back(tmp);
        
    }
    for(int l=0;l<s.size(); l++){
        for(int k=l+1; k<s.size(); k++){
            if(s[l]==s[k]){
                d++;
                break;
            }
        }
    }
    cout<<s.size()-d<<endl;
    return 0;
}