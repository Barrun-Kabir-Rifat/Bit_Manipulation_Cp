#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  

  
int main()
{
   // ith bit set or not;
   int n,i;
   cin>>n>>i;
  int f=000001;

  // use left shift operator
  int ans=((f<<i)&n);
  if(ans)
  {
   cout<<"the bit is set"<<endl;
  }
  else
  {
   cout<<"the bit is unset"<<endl;
  }
  
   return 0;
}
