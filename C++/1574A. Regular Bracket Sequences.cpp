#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        int n;
        cin>>n;
        for(int l=1; l<=n; l++){
           for(int i=1; i<=l; i++){
              cout<<"(";
           }
           for(int i=1; i<=n-l; i++){
              cout<<")(";
           }
           for(int i=1; i<=l; i++){
              cout<<")";
           }
           cout<<endl;
        }
    }
    return 0;
}