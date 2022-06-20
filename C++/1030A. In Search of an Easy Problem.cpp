#include<iostream>
using namespace std;
int main()
{
    int n,i, a, dif=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a==1)
        {
            dif++;
        }
    }
    if(dif==0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    return 0;
}