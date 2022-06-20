#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum;
    cin>>n;
    if(n&1){
        sum = (n+1)/2 * (-1);
    }
    else{
        sum = n/2;
    }
    cout<<sum<<endl;
    return 0;
}