#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
       cin>>n;
   while(n)
   {
       if(n==0)
       {

           break;
       }

       string s;
       cin>>s;
       int row = s.length()/n;

       char mat[row][n];
       int i=0,j=0,k=0;
       for( i=0;i<row;i++)
       {
           if(i%2==1)
           {
              for(j=n-1;j>=0;j--)
           {

               mat[i][j]=s[k++];

           }
           }
            else
           {

               for(j=0;j<n;j++)
               {

                   mat[i][j]=s[k++];
               }
           }
       }
           for(i=0;i<n;i++)
           {

               for(j=0;j<row;j++)
               {

                   cout<<mat[j][i];
               }
           }
           cout<<endl;


cin>>n;



   }




}
