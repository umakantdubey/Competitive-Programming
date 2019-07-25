#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ull unsigned long long
void fast()
{std::ios_base::sync_with_stdio(false) ; std::cin.tie(0) ; std::cout.tie(0);}
int main()
{
	fast();
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
#endif



       ull n,m;
       cin>>n>>m;
       ull c=0;

       for(int i=1;i<=n;i++)
       {
       if(m%i==0&&(m/i)<=n)
       {
              c++;
              //cout<<i;
       }
       }
       cout<<c<<endl;
}

