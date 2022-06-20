#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a, b;
    int i;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {
        for(int j=i+2; j<a.size(); j=j+2){
            if(a[i]>a[j]){
                int n;
                n = a[i] ;
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}