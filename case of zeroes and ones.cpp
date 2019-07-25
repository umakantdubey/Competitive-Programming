#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
#endif
int t;
cin>>t;
int k=0;
string s;
cin>>s;
int a=0,b=0;
for(int i=0;i<t;i++)
{
if(s[i]=='1')
{
	a++;
}
else
{
	b++;
}
}
cout<<t-2*min(a,b)<<endl;
}

