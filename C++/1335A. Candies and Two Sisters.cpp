#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n, a, b;
        cin>>n;
        a = n/2 + 1;
        b = n - a;
        cout<<b<<endl;
    }
    return 0;
}