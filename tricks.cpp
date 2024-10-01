#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void printbinary(int num)
{
  for(int i=10;i>=0;i--)
  {
    cout<<((num>>i)&1);
  }
  cout<<endl;
}
  
int main()
{
  int n=5;
  //left shift------multiplication n*(2^i)
  cout<<(n<<1)<<endl;

  //left shift------division n/(2^i)
  cout<<(n>>1)<<endl;

  if(n&1)
  {
    cout<<"The number is odd"<<endl;
  }
  else
  {
    cout<<"even"<<endl;
  }
   for(char i='A';i<='H';i++)
  {
    cout<<i<<" ";
    printbinary(i);
  }
  for(char i='a';i<='h';i++)
  {
    cout<<i<<" ";
    printbinary(i);
  }
  //upercase letter to lower case letter
  char ch='A';
  cout<<char('A' |' ')<<endl;
  //or
  // in lowercase 5th bit is set
  //in uppercase letter 5th bit is not set;
  cout<<char(ch|(1<<5))<<endl;

  //lowercase to uppercase
  cout<<char('a'&'_')<<endl;
  //or make the 5h bit unset;
  cout<<char(ch&(~(1<<5)))<<endl;


  //power of two or not
  n=11;
  if(n&(n-1))
  {
    cout<<"Not power of two"<<endl;
  }
  else
  {
    cout<<"Power of two"<<endl;
  }
   return 0;
}