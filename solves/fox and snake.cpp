#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,alt=0;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            alt++;
        }
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
                cout<<"#";
            else
            {
                if(alt%2!=0)
                {
                    if(j==m)
                        cout<<"#";
                    else
                        cout<<".";
                }
                else
                {
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
