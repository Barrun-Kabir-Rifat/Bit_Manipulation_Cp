#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
int n;
cin>>n;
int count=0;
while(n>0)
{
    count++;
    n=n&(n-1);
} 
cout<<"The no of set bits here is == ";
cout<<count<<endl;
}
   return 0;
}