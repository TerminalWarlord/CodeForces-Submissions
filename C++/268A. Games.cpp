#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    vector<int> d,e;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        d.push_back(a);
        e.push_back(b);
    }
    for(int i=0; i<n; i++){
        for(int l=0; l<n; l++){
            if(d[i]==e[l]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}