#include<bits/stdc++.h>
#include<numeric>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, count=0;
        cin>>n;
        vector<char> x, y;
        for(int j=0; j<n; j++){
            char tmp;
            cin>>tmp;
            x.push_back(tmp);
            y.push_back(tmp);
        }
        sort(y.begin(), y.end());
        for(int k=0; k<x.size(); k++){
            if(x[k]!=y[k]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}