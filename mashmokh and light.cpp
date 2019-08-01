#include<bits/stdc++.h>
using namespace std;
int main()
{


    int m,n;
    cin>>n>>m;
    int a[n];
    int b[n];
    for(int j=1;j<=m;j++)
    {int x;

        cin>>x;
        for(int i=1;i<=n;i++)
        {

            while(x<=i)
            {

              b[i]=x;
              i++;
            }

        }
    }
    for(int i=1;i<=n;i++)
    {

        cout<<b[i]<<" ";
    }
}
