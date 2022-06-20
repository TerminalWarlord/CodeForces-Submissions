#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], g=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if((((a[i]&1)&&(a[i-1]&1))||(a[i]%2==0&&a[i-1]%2==0))&&(i>0)){
            g++;
        }
    }
    cout<<n-g;
    return 0;
}