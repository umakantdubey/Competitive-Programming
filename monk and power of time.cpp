#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


 int t;
 cin>>t;
 queue<int>q;
 int k;
 for(int i=0;i<t;i++)
 {
     cin>>k;
     q.push(k);

 }
   int count=0;
 for(int i=0;i<t;i++)
 {
     int x;

     cin>>x;
     count++;
     while(!(q.front()==x))
     {
         int temp= q.front();
         q.pop();
         q.push(temp);
         count++;
     }
     q.pop();


 }
 cout<<count<<endl;


}
