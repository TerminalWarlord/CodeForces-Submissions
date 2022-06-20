#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        if(i<1){
            a.push_back(tmp);
        }
        else{
            if(tmp>a[a.size()-1]){
                a.push_back(tmp);
            }
            else if(tmp<a[0]){
                a.push_back(tmp);
            }
        }
        sort(a.begin(), a.end());
    }
    cout<<a.size()-1<<"\n";
    return 0;
}