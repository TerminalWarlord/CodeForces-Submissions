#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, r=0, a, b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(b-a>=2&&b>a){
            r++;
        }
    }
    cout<<r<<endl;
    return 0;
}