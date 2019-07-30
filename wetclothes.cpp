#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,g;
    cin>>n>>m>>g;
    int t[n],a[m];
    int t1[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>a[j];
    }
    int temp=0;
     long long int c=0;
   bool visited[m];
   for(int i=0;i<m;i++)
   {
       visited[i]=false;
   }
    for(int i=1;i<n;i++)
    {
       // temp=0;
       temp=t[i]-t[i-1];
       for(int j=0;j<m;j++)
       {
           if((temp>=a[j])&&(visited[j]==false))
             {


                     c++;
                  visited[j]=true;

            }



       }



    }
   // sort(t1,t1+n-1);
   // sort(a,a+n);


    cout<<c<<endl;




}
