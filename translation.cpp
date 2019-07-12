#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s,s1;
    cin>>s>>s1;
    int l= s1.length();
    int k=0;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]==s1[l-i-1])
        {
            k++;

        }
    }
    if(k==l)
    {

        cout<<"YES"<<endl;
    }
    else
    {

        cout<<"NO"<<endl;
    }

}
