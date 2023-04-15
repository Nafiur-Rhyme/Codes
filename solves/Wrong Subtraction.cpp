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
    ll n, k;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        if(n%10==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}