#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int n, count=0;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
        if(i==0){
            if(tmp==-1){
                count++;
            }
        }
        else if(tmp==-1&&i>0){
            if(a[i-1]>0){
                a[i] = a[i-1] - 1 ;
            }
            else{
                count++;
            }
        }
        else if(tmp>0){
            if(a[i-1]>0&&a[i]){
                a[i] = a[i-1] + a[i];
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}