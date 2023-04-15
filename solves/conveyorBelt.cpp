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
ll solve(ll n, ll x, ll y)
{
    x--;
    y--;
    x = min(x,n-x-1);
    y = min(y,n-y-1);
    return min(x,y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, x1, y1, x2, y2;
        cin>>n>>x1>>y1>>x2>>y2;
        cout<<abs(solve(n,x1,y1)-solve(n,x2,y2))<<endl;
    }
    return 0;
}