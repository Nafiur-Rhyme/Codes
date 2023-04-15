#include<bits/stdc++.h>
using namespace std;

int main()
{
    #define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,time=0;
        cin>>n;
        if(n<6)
            n=6;
        if(n%2!=0)
        {
            n++;
            time = (n/2)*5;
        }
        else
        {
            time = (n/2)*5;
        }
        cout<<time<<"\n";
    }
    return 0;
}