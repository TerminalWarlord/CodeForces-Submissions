#include<iostream>
using namespace std;
int main()
{
    int n, i, lol=0;
    char ch[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ch;
        if((ch[0] == '+') || (ch[2] == '+'))
        {
            lol++;
        }
        else
        {
            lol--;
        }     
    }
    cout<<lol;
}