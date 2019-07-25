#include<bits/stdc++.h>
using namespace std;
int main()
{
//	#ifndef ONLINE_JUDGE
	//   freopen("input.txt", "r", stdin);
      // freopen("output.txt", "w", stdout);
//#endif
int t;
cin>>t;
int k=0;
string s1,s2;
cin>>s1>>s2;
for(int i=0;i<t;i++)
{
	k = min(abs(s1[i]-s2[i]),10-abs(s1[i]-s2[i]));
}


cout<<k<<endl;

}

