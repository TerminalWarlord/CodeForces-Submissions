#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0;
    int a[3];
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    for(int i=0; i<4; i++){
        for(int l=i+1; l<4; l++){
            if(a[i]==a[l]){
                k++;
                break;
            }
        }

    }
    cout<<k<<endl;
    return 0;
}