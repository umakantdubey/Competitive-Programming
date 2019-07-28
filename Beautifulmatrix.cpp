
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[5][5];
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];

        }
    }
    int count =0,c1=0,c2=0;
     for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        {
           if(a[i][j]=='1')
           {
                c1=i;
                c2=j;
        }
        cout<<c1<<c2<<endl;
    }




    }

}
