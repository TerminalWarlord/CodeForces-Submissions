#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a, sum;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        a = a/100;
        sum  = sum + a;
    }
    sum = (sum/n)*100;
    cout<<fixed<<setprecision(12)<<sum<<endl;
    return 0;
}