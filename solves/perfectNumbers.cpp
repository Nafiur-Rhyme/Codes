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
bool solve(int n)
{
    vector<int> divisor;
    int p=0;
    for(int i=1; i<=n/2; i++){
        if(n%i == 0){
            divisor.push_back(i);
        }
    }
    for(int i=0; i<divisor.size(); i++){
        p+=divisor[i];
    }
    if(p==n){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string result = (solve(n)==true) ? "true" : "false";
    cout << result << endl;
    return 0;
}