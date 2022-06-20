#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FAST_IO;
    int t, count=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, c, count=0;
        cin>>a;
        vector<int> b;
        for(int l=0; a>0; l++){
            c = a%10;
            a /= 10;
            if(c!=0){
                count++;
            }
            b.push_back(c);
        }
        cout<<count<<"\n";
        for(int l=b.size()-1; l>=0; l--){
            int tmp = b[l];
            if(tmp==0){
                continue;
            }
            for(int j=0; j<l; j++){
                tmp *= 10;

            }
            cout<<tmp<<" ";
        }
        cout<<"\n";
    }
    return 0;
}