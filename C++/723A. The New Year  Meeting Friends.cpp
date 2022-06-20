#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    vector<int> a;
    for(int i=0; i<3; i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    int diff=0;
    for(int i=2; i>0; i--){
        diff += a[i] - a[i-1];
    }
    cout<<diff<<"\n";
    return 0;
}