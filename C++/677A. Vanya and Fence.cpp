#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, a;
    long long w=0;
    cin>>n>>h;
    for(long long i=0; i<n; i++){
        cin>>a;
        if(a>h){
            w = w+2;
        }
        else{
            w++;
        }
    }
    cout<<w<<endl;
    return 0;
}