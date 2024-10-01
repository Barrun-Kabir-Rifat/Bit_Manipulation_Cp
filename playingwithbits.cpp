#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
int printbinary(int num)
{
    for(int i=10;i>=0;i--)
    {
         cout<<((num>>i)&1); 
    }
    cout<<endl;
}
  
int main()
{
    /*set means 1 and unset is 0*/
  printbinary(11);
  int a=11;
 int i=3;
  if((1<<i)&a)
  {
    cout<<"The third bit is set"<<endl;
  }
  else
  {
    cout<<"The third bit is not set"<<endl;
  }
//to make a unset bit into set bit(unset bit->set bit)
a=a|(1<<4); // making 4 th bit set;
printbinary(a);
a=a&(~(1<<4)); // making 4th bit unset;(~)->---anti 
printbinary(a);

//to toggle bit,use xor operation;
a=a^(1<<4); //4th bit will be toggled
printbinary(a);
int ct=0; //set bit count;
for(int i=31;i>=0;i--)
{
    if(a&(1<<i))
    { 
        ct++;
    }
}

cout<<ct<<endl;
cout<<__builtin_popcount(a)<<endl;

// for long long int
cout<<__builtin_popcountll((1ll<<35)-1)<<endl;
return 0;

}