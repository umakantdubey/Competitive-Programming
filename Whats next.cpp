#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    int d=0;
   while(1)
   {

cin>>a>>b>>c;
       int d1,d2;
       d1 = b-a;
       d2= b/a;
       if(a==0&&b==0&&c==0)
       {
           break;

       }
      if((b-a)==(c-b))
      {

          d1 =b-a;
          cout<<"AP "<<d1+c<<endl;
      }
      else
      {

          d2=b/a;
          cout<<"GP "<<c*d2<<endl;
      }


   }
}
