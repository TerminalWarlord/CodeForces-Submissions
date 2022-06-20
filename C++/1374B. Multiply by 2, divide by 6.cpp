#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); tie.cin(0); tie.cout(0);
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, i=0, j=0;
        cin>>n;
        while(n%2==0){
            n /= 2;
            i++;
        }
        while(n%3==0){
            n /= 3;
            j++;
        }
        if(i>j||n>3){
            cout<<-1<<endl;
        }
        else{
            cout<<(2*j)-i<<endl;
        }
    }
    return 0;
}