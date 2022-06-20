#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a, p, q;
    cin>>n>>m>>a;
    p = n/a;
    q = m/a;
    if(n%a!=0){
        p = p + 1;
    }

    if(m%a!=0){
        q = q + 1;
    }
    cout<<p*q<<endl;
    return 0;
}