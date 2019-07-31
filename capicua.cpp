#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int c=0;
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[n-i-1])
            {
                c++;
            }
        }
        if(c==s.length())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }




}
