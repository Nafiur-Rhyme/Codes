#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    cin>>str;
    for(int i=0;i<str.length();)
    {
        if(str[i]=='.')
        {
            cout<<0; 
            i++;
        }
        else if(str[i]=='-'&&str[i+1]=='.')
        {
            cout<<1; 
            i+=2;
        }
        else if(str[i]=='-'&&str[i+1]=='-')
        {
            cout<<2; 
            i+=2;
        }
    }
    return 0;
}
