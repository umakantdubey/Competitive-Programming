#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int flag;
        for(int i=n;i<=m;i++)
        {
 flag=1;
            for(int j=2;j<=sqrt(i);j++)
            {


                if(i%j==0)
                {
                    flag=0;

                   // break;

                }


            }
              if(flag==1&&i>1)
            {

                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
}
