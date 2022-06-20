#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cin.tie(0);
int main()
{
    FAST_IO;
    vector<int> abc;
    for(int i=0; i<4; i++){
        long long tmp;
        cin>>tmp;
        abc.push_back(tmp);
    }
    sort(abc.begin(), abc.end());
    long long a, b, c;
    a = (abc[1]+abc[2]-abc[0])/2;
    b = abc[1]-a;
    c = abc[2]-a;
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return 0;
}