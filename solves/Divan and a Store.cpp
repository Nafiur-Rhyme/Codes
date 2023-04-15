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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, l, r, k, count=0;
        cin>>n>>l>>r>>k;

        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll i = 0;
        while(n--){
            if(a[i]>=l && a[i]<=r && a[i]<=k){
                count++;
                k-=a[i];
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}