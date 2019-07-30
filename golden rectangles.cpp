#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   cin>>n;
     int c=0;
  while(n--)
  {

      double h=0.00,w=0.00;
      cin>>w>>h;
      double k,k1;
      k=w/h;
      if(k>=1.60 && k<=1.70)
      {
          c++;
         // cout<<k;
      }
      k1=h/w;
      if(k1>=1.60 && k1<=1.70)
      {
          c++;
         // cout<<k;
      }
   // cout<<k<<endl;



  }
     cout<<c<<endl;


}

