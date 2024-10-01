#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  

  
int main()
{
   int n,i;
   cin>>n>>i;
   cout<<n<<" (>>)right shift "<<i<<" =="<<(n>>i)<<endl;
cout<<endl;
   // n>>i==n/(2^i)
   return 0;
}
