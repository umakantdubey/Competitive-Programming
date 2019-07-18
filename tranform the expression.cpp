#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    stack<char>stk;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
            {
                stk.push(s[i]);

            }
            else if(s[i]==')'){
                while(stk.top()!='(')
                {
                    cout<<stk.top();
                    stk.pop();
//stk.pop();
                }
                stk.pop();

            }
            else{
                cout<<s[i];
            }
        }

cout<<endl;
    }
}
