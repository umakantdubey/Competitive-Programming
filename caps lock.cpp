#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int count =0;
    int l=0;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]==toupper(s[i]))
        {
            count++;
        }

    }
   // cout<<count;
if(count==l)
{
    for(int i=0;i<l;i++)
    {

        s[i]=tolower(s[i]);
        // cout<<s;
    }
    cout<<s<<endl;


}
else if(s[0]==tolower(s[0])&&l-count==1)
{
    s[0]=toupper(s[0]);
    for(int i=1;i<l;i++)
    {

    s[i]=tolower(s[i]);




    }
    cout<<s<<endl;
}
else
{

    cout<<s<<endl;
}

}
