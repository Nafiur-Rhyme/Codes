#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string t;
    int n;
    cin>>n>>t;
    for(int i=1; i<=n;i++)
    {   
        if(n%i==0)
            reverse(t.begin(), t.begin()+i);
    }
    cout<<t;
    return 0;
}
