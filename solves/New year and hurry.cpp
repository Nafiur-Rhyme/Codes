#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,timeLeft;
    cin>>n;
    cin>>k;
    timeLeft = 240-k;
    int i;
    for(i=1;i<=n;i++)
    {
        if(i*5>timeLeft)
        {
            break;
        }
        else
        {
            timeLeft-=i*5;
        }
    }
    cout<<i-1;
    return 0;
}
