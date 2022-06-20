#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int x, count1=0, count2=0;
        cin>>x;
        count2= x/3;
        count1= x/3;
        int sum = (count2*2) +count1;
        if(sum!=x){
            if(sum+2==x){
                count2 += 1;
            }
            else{
                count1 += 1;
            }
        }
        cout<<count1<<" "<<count2<<endl;
    }
}