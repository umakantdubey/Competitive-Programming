#include<bits/stdc++.h>
using namespace std;
int sumdigit(int n)
{

    int sum=0;
    while(n!=0)
    {

     //   sum=n%10;
        sum =sum+n%10;
        n=n/10;
    }
return sum;
}
 int getSum(int n)
    {
    int sum = 0;
    while (n != 0)
    {
     sum = sum + n % 10;
     n = n/10;
    }
 return sum;
 }
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        long long int sum=0;
        cin>>n;
        int a[n],b[n];
        long long int ans=0;
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {

            for(int i=j+1;i<n;i++)
            {

                int product=a[i]*a[j];
                ans = sumdigit(product);
                sum = max(sum,ans);
            }
        }
        cout<<sum<<endl;

    }
}
