#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    if(int(n[0])>96){
        n[0] = n[0] - 32;
    }
    cout << n;
    return 0;
}