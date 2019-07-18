#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n!=-1)
    {
        long long int sum=0,t=0;
        int a[n];
        int i;
        for( i=0;i<n;i++)
        {

            cin>>a[i];
            sum =sum+a[i];
        }
        int r =sum/n;
       if(n*r==sum)
       {

           for(int i=0;i<n;i++)
           {

               if(r>a[i])
               {

                 t=t+r-a[i];
               }
           }
           cout<<t<<endl;
       }
       else{
        cout<<"-1"<<endl;
       }

cin>>n;

    }
}
