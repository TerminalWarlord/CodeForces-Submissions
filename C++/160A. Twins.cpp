#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
int main()
{
    FAST_IO;
    int n;
    cin>>n;
    vector<int> a;
    int sum1=0;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        sum1 += tmp;
        a.push_back(tmp);
    }
    sum1 /= 2;
    sort(a.begin(), a.end());
    int sum2=0, count=0;
    for(int i=n-1; i>=0; i--){
        sum2 += a[i];
        count += 1;
        if(sum1<sum2){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}