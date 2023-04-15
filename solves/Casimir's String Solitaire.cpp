#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        int size = s.size();
        for(int i=0; i<size; i++){
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
        int totalAC=a+c;
        if(totalAC==b)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

