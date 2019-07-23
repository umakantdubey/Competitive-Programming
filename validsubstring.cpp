#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     stack<char>stk;
     string s;
     cin>>s;
     int k=0;
     int l=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='(')
         {
           stk.push(i);
         }
         else
        {
            stk.pop();
            if(!stk.empty())
            {
                l=max(l,i-stk.top());
            }
            else
            {
                stk.push(i);
            }

        }
    }
    cout<<l<<endl;

    }
}
