#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int a, b, dif, same;
    cin>>a>>b;
    if(a>=b){
        dif = b;
        same = (a-b)/2;
    }
    else{
        dif = a;
        same = (b-a)/2;
    }
    cout<<dif<<" "<<same<<"\n";
    return 0;
}