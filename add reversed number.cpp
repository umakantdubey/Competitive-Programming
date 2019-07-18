#include<bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int r =  0;

    while(num>0)
    {
        r = r*10+num%10;
        num = num/10;
    }
    return r;
}
int main()
{

    int t;
  cin>>t;
  while(t--)
  {


int a,b;
    cin>>a>>b;
int m,n,p;
m = reverse(a);
n = reverse(b);
p=m+n;
cout<<reverse(p)<<endl;


  }
}
