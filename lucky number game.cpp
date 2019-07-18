#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            int x;

            cin>>x;
            if(x%a==0)
            {
                c1++;
            }
            if(x%b==0)
            {
                c2++;
            }
            if(x%a==0 && x%b==0)
            {
                c1++;
            }

        }
        if(c1>c2)
            {
                cout<<"BOB"<<endl;
            }
            else
            {
                cout<<"ALICE"<<endl;
            }


    }

}
