#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m, inconv=0;
        cin >> n >> m;
        int a[n*m]={};
        for(int i=0; i<m; i++){
            cin >> a[i];
            for(int j=0; j<i; j++){
                if(a[j]<a[i])
                    inconv++;
            }
        }
        cout<<inconv<<endl;    
    }
    return 0;
}
