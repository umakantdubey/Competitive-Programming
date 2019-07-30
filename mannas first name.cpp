#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    int c=0,c1=0;
    while(t--)
    {
        c=0,c1=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)

{
    if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
    {
         if(s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')

    {
        c1++;
    }
    else
    {
        c++;
    }

        //c++;
    }

}
cout<<"SUVO = "<<c;
cout<<", SUVOJIT = "<<c1;
cout<<endl;





    }
}
