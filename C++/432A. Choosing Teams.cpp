#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int n, k;
    cin>>n>>k;
    int count=0;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        tmp += k;
        if(tmp<=5){
            count++;
        }
    }
    count /= 3;
    cout<<count<<endl;
    return 0;
}