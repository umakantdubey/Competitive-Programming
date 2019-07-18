#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    for(int i=1;i<=100;i++)
    {
        a[i]=(i*(i+1)*((2*i)+1))/6;


    }
long long int n;
        cin>>n;
    while(n)
    {


        cout<<a[n]<<endl;
        cin>>n;
    }
}
