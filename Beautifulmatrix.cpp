
#include<bits/stdc++.h>
using namespace std;
int main()
{

   // int a[5]5];
    int count=0;
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {

                count=abs(i-3)+abs(j-3);
            }

        }
    }
    cout<<count<<endl;





    }
