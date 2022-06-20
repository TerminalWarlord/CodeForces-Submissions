#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, ps=0;
    cin>>n;
    cin>>p;
    int pl[200];
    for(int l=0; l<p; l++){
        cin>>pl[l];
    }
    cin>>q;
    for(int l=p; l<p+q; l++){
        cin>>pl[l];
    }
    sort(pl, pl+(p+q));
    for(int l=0; l<p+q; l++){
        if(pl[l]!=pl[l+1]){
            ps++;
        }
    }
    if(ps==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}