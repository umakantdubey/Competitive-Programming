#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
string p="hello";
int l= s.length();
int j=0;
int k=0;
for(int i=0;i<l;i++)
{

    if(s[i]==p[j])
    {
        k++;
        j++;

    }
}
if(k==5)
{

    cout<<"YES"<<endl;
}
else
{

    cout<<"NO"<<endl;
}

}

