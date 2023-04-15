#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
typedef map<int, char> map_t;
typedef map<char, int> reverse_map_t;
 
reverse_map_t get_reverse( map_t m )
{
    reverse_map_t r;
    for( const auto& p: m )
    {
        r[p.second] = p.first;
    }
    return r;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll x, n, r;
        cin>>x>>n;
        if(x%2 == 0)
        {
            if(n%4==0) r = x;
            else if(n%4==1) r = x - n;
            else if(n%4==2) r = x + 1;
            else if(n%4==3) r = x + n + 1;
        }
        else
        {
            if(n%4==0) r = x;
            else if(n%4==1) r = x + n;
            else if(n%4==2) r = x - 1;
            else if(n%4==3) r = x -n -1;
        }
        cout<<r<<endl;
    }
    return 0;
}