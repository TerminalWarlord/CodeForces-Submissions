#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int a, b, c;
    vector<int> x;
    cin>>a>>b>>c;
    x.push_back(a+(b*c));
    x.push_back(a*(b+c));
    x.push_back(a*b*c);
    x.push_back((a+b)*c);
    x.push_back(a+b+c);
    x.push_back((a*b)+c);
    sort(x.begin(), x.end());
    cout<<x[x.size()-1]<<endl;
    return 0;
}