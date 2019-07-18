#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;


cpp_int fact(int n)
{

    if(n<=1)
    {

        return 1;
    }
    if(n>=2)
    {

        return n*fact(n-1);
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
}
