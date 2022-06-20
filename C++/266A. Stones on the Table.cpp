#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=0;
    char s[50];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>s[i];
        if(i>0){
            if(s[i]==s[i-1]){
                j++;
            }
        }
    }
    cout<<j;
    return 0;
}