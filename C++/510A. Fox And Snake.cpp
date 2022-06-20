#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, l=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        if(i&1){
            if(l&1){
                cout<<"#";
                for(int j=0; j<m-1; j++){
                    cout<<".";
                }
                cout<<endl;
            }
            else{
                for(int j=0; j<m-1; j++){
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            l++;
        }
        else{
            for(int l=0; l<m; l++){
                cout<<"#";
            }
            cout<<endl;
        }
    }
    return 0;
}