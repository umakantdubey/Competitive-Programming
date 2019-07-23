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
        int c=0,k=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
            {
                stk.push(s[i]);
                c=1;
            }
            if(stk.empty())
            {
               k++;
               break;
            }
       if(!stk.empty())
        {
         if(s[i]==')')
         {
             if(stk.top()=='(')
             {
                 stk.pop();
                 continue;
             }
             else
             {
                 break;
             }
         }
          if(s[i]==']')
         {
             if(stk.top()=='[')
             {
                 stk.pop();
                 continue;
             }
             else
             {
                 break;
             }
         }

         if(s[i]=='}')
         {
             if(stk.top()=='{')
             {
                 stk.pop();
                 continue;
             }
             else
             {
                 break;
             }
         }



        }
        else
        {

            break;

        }
        }
       // cout<<k;
       // cout<<stk.empty();
        if((stk.empty())&&k==0)
        {
            cout<<"balanced"<<endl;
        }
        else
        {
            cout<<"not balanced"<<endl;
        }
    }
}

