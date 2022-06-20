#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0); cin.tie(0);

bool isPrime(int n)
{
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i=i+6)
        if(n%i==0||n%(i+2)==0)
            return false;
    return true;
}

int main()
{
    FAST_IO;
    long long n;
    cin>>n;
    int x,y;
    x = n/2;
    y = n/2;
    if(n&1){
        y = n/2 + 1;
    }
    while(true){
        if(isPrime(x)==true||isPrime(y)==true){
            x--;
            y++;
        }
        else{
            if(x+y==n){
                break;
            }
            
        }
    }
    cout<<x<<" "<<y;
    return 0;
}