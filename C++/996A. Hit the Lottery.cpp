#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, den=0;
    cin>>n;
    int a[] = {1, 5, 10, 20, 100};
    for(long long i=4; i>=0; i--){
        den = den+ n/a[i];
        n = n%a[i];
    }
    den = n + den;
    cout<<den<<endl;
    return 0;
}