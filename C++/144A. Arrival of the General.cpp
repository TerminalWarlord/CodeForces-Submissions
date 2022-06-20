#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=0;
    vector<int> a, c;
    for(int i=0; i<n; i++){
        int lmao;
        cin>>lmao;
        a.push_back(lmao);
        c.push_back(lmao);
    }
    sort(a.begin(), a.end());
    for(int j=0; j<n; j++){
            if(c[j]==a[n-1]){
                c.insert(c.begin(), a[n-1]);
                c.erase(c.begin()+j+1);
                break;
            }
            else{
                b++;
            }
        }
    for(int j=n-1; j>0; j--){
            if(c[j]==a[0]){
              break;
            }
            else{
                b++;
            }
    }
    cout<<b<<endl;
    return 0;
}