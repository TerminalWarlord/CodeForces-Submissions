#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M, N, i;
    cin>>M>>N;
    if((M*N)%2!=0)
    {
        i = (M*N - 1)/2;
    }
    else
    {
        i = (M*N)/2;
    }
    cout<<i;

    return 0;

}