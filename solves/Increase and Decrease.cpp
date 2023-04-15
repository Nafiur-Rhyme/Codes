#include<bits/stdc++.h>
using namespace std;
int n, a, pass = 0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        pass+=a;
    }
    if(pass%n == 0)
    {
        cout<<n;
    }
    else
    {
        cout<<n-1;
    }
    return 0;
}
