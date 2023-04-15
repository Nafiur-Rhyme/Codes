#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    int length = str.length();

    for (int i = 0; i < (length / 2); i++)
        if (str[i] != str[length - 1 - i])
            return false;

    return true;    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,sb;
    int answer = 0;
    cin>>s;
    sb=s;
    int size = s.length();
    int n = size;
    for(int i=0; i<size; i++)
    {
        if(isPalindrome(sb))
        {
            sb = s.substr(i+1, size);
            n--;
        }
        else
        { 
            answer = sb.length();
        }
    }
    cout<<(answer == 1 ? 0 : answer);
    return 0;
}