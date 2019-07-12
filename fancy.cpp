#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
cin.ignore(256, '\n');

while(t--)
{

    string s;
   // getline(cin,s);
    string s1 ="not";
    string s2=" ";
    string s3;
  getline(cin,s3);
    s=s2+s1+s2;
    string s4,s5;
    s4=s1+s2;
    s5=s2+s1;
    int l=s3.length();
    int found = s3.find(s);
    int found1 = s3.find(s4);
    int found2=s3.find(s5);
    if(found>=0)
    {
        cout<<"Real Fancy"<<endl;
    }
    else if(found1==0)
    {
        cout<<"Real Fancy"<<endl;

    }
   // cout<<found2;
else if(found2==l-4)
{
  cout<<"Real Fancy"<<endl;

}
else
    {

        cout<<"regularly fancy"<<endl;
    }


   // cout<<s<<endl;
}
}
