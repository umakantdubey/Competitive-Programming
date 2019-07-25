#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
#endif
	int n,m;
	cin>>n>>m;
	int p=0;
	//p=n/2;
	int p1=0;

	p1= n%2;
	//int x=0;

	if(n<m)
	{
		p= -1;
		//continue;
	}
	else
	{
		if(n%2==0)
		{
			p= n/2;
		}
		else
		{
			p = (n/2)+1;

		}
		while(p%m!=0)
			{
				p++;
			}
	}
	cout<<p<<endl;


}
