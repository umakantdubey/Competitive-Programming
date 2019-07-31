#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long t;
cin>>t;
while(t--){
long long n,a,b;
cin>>n>>a>>b;
long long x,y;
unsigned long long int ans;
x = round((b*n)/(a+b));//by diifeerentaiation;
y = n-x;
ans = a*x*x+b*y*y;
cout<<ans<<endl;

}
}
