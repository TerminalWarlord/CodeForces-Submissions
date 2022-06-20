#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t, count=0;
    cin>>t;
    for(int i=0; i<t; i++){
        long long a, b, c;
        cin>>a>>b;
        if(a>b){
            if((a-b)%10!=0){
                c = (a-b)/10 + 1;
            }
            else{
                c = (a-b)/10;
            }
        }
        else if(b>a){
            if((b-a)%10!=0){
                c = (b-a)/10 + 1;
            }
            else{
                c = (b-a)/10;
            }
        }
        else{
            c = 0;
        }
        cout<<c<<"\n";
    }
    return 0;
}