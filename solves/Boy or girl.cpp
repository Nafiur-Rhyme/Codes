#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
    char name[101];
    int count=1;
    cin>>name;
    int len = strlen(name);
    sort(name,name + len);
    for(int i=0;i<len-1;i++)
    {
        if(name[i]!=name[i+1])
        {
            count++;
        }    
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}