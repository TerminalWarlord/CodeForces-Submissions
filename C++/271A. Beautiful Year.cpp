#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin>>n;
    while (true){
        n++;
        a = n/1000;
        b = n/100%10;
        c = n/10%10;
        d = n%10;
        if(a!=b&&a!=c&&b!=c&&b!=d&&c!=d&&d!=a&&d!=b){
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}