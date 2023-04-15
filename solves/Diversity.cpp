#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,change=0,unq=0;
    string s;
    getline(cin,s);
    cin>>k;
    int size = s.length();
    map<char,int> charcount;
    map<char,int> :: iterator iter;
    char ch = 'a';

    for(int i=0;i<26;i++)
    {
       charcount.insert({ch,0});
       ch++;
    }
    if(k<=size)
    {
        for(iter=charcount.begin();iter!=charcount.end();iter++)
        {
            for(int i=0;i<size;i++)
            {
                if((*iter).first==s[i])
                    (*iter).second++;
            }
        }
        for(iter=charcount.begin();iter!=charcount.end();iter++)
        {
            if((*iter).second>0)
            {
                unq++;
            }
        }
        if(unq<=k)
        {
            change = k-unq;
            cout<<change;
        }
        else
            cout<<change;
    }
    else
        cout<<"impossible";

    return 0;
}

