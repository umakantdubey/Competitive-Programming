#include<iostream>
using namespace std;
#include<stack>

int main()
{
int n;
cin>>n;
stack<char> s;
stack<char> temp;
string input;
cin>>input;
for(int i=0;input[i]!='\0';i++)
{
if(s.size()==0)
{
s.push(input[i]);
}
else
{
if(input[i]==s.top())
{
s.pop();
}
else
{
s.push(input[i]);
}
}
}
cout<<s.size()<<endl;
while(s.size()!=0)
{
temp.push(s.top());
s.pop();
}
while(temp.size()!=0)
{
cout<<temp.top();
temp.pop();
}
}
