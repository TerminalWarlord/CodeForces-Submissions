#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    string s;
    cin>>n;
    for(i=1; i<=n; i++){
        if(i&1){
            cout<<"I hate ";
        }
        else{
            cout<<"I love ";
        }
        if(i+1<=n){
            cout<<"that ";
        }
    }
    cout<<"it"<<endl;
    return 0;
}