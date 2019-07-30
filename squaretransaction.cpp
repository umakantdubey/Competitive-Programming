#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int t;
   cin>>t;
   int a[t];
   for(int i=0;i<t;i++)
   {
       cin>>a[i];
   }
   long long int q;
   cin>>q;
   while(q--)
   {
       long long int sum =0;
        long long int c=0;
       int d;
       cin>>d;
       for(int i=0;i<t;i++)
       {

               //cout<<"SDG";
               if(sum>=d)
               {
                   break;
               }
               else
               { sum =sum+a[i];
              c++;

               }




       }
       if(sum>=d)
       {
         cout<<c<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }


   }



}

