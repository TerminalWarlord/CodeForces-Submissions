#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=0;
    cin>>n;
    i = n;
    if(i>=5){
        j = j + i/5;
        i = i%5;
    }
    if(i>=4){
        j = j + i/4;
        i = i%4;
    }
    if(i>=3){
        j = j + i/3;
        i = i%3;
    }
    if(i>=2){
        j = j + i/2;
        i = i%2;
    }
    j = j + i;
    cout<<j;
    return 0;
}