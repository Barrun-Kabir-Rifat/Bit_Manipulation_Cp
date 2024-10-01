#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
  int a=5,b=6;
  //a^a=0;a^0=a;
  a=a^b;
  b=b^a;
  a=a^b;

  cout<<a<<" "<<b<<endl;
  cout<<(a^0)<<endl;//it will give a;
  cout<<(a^a)<<endl;//it will give 0;
   return 0;
}