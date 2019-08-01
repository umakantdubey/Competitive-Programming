#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s;
    cin>>s;
  long long int l = s.length();
  long long int k=0,c=0;
    for(int i=0;i<l;i++)
    {

        if(islower(s[i]))
        {

            for(int j=i-1;j>0;j--)
            {

                if(isupper(s[j]))
                {

                    c++;
                     break;
                }
            }
        }
    }
    cout<<c<<endl;
}
