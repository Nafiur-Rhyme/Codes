#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double
bool solve(string str, int size)
{
    bool state = false;
    for(int i=0;i<size-1;i++)
	{
		if (str[i]=='A' && str[i+1]=='B' &&  str[i+2]=='C')
		{
			state = true;
		}
		else if(str[i]=='A' && str[i+1]=='C' && str[i+2]=='B')
		{
			state = true;
		}
		else if( str[i]=='B' && str[i+1]=='A' && str[i+2]=='C')
		{
			state = true;
			} 
		else if (str[i]=='B' && str[i+1]=='C' && str[i+2]=='A')
		{
			state = true;
		}
		else if(str[i]=='C' &&  str[i+1]=='A' && str[i+2]=='B') 
		{
			state = true;
		}
		else if (str[i]=='C' && str[i+1]=='B' && str[i+2]=='A')
		{
			state = true;
		} 		
	}
	return state;   
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    cin>>str;
    int size = str.length();
    int cells[size]={};
    if(solve(str,size)) cout<<"Yes";
	else cout<<"No";
    return 0;
}
