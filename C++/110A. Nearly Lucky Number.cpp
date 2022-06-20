#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, m, d=0;
    cin>>n;
    for(i=0; n!=0; i++){
        m = n%10;
        n = n/10;
        if(m==4||m==7){
            d++;
        }
    }
    if(d==4||d==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}