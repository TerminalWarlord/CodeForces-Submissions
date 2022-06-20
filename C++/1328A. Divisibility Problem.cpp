#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, d=0;
    cin>>t;
    for(int i=0;i<t; i++){
        int a, b, c;
        cin>>a>>b;
        if(a%b!=0){
            c = b - (a%b);
        }
        else{
            c = 0;
        }
        cout<<c<<endl;
    }
    return 0;
}