#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        int a,b;
        cin>>b>>a;
        int arr[n];
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        int k=0,k1=0;
        for(int i=0;i<n;i++)
        {

            if(arr[i]%b==0)
            {

                arr[i]--;
                k++;
                //break;
                 if(arr[i]%a==0)
           {
               arr[i]--;
               k1++;
               break;

           }
            }

        }
        cout<<k<<k1<<endl;

    }


}
