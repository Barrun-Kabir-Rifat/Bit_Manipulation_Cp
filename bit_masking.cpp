/*Consider this problem.There are N<=5000 workers .Each worker is available during some no_of_workers of this month which has 30 no_of_workers.
For each worker, you are given a set of numbers,each from interval[1,30],representing his/her availibility. 
You need to assign an important project to two workers but they will be able to work on the project only when they are both available.
Find two workers that are best for the job-maximize the number of no_of_workers when both of these workers are available*/
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
  int n;
  cin>>n;
  vector<int>masks(n,0);
  for(int i=0;i<n;i++)
  {
    int no_of_workers,mask=0;
    cin>>no_of_workers;
   for(int j=0;j<no_of_workers;j++)
   {
    int day;
    cin>>day;
     mask=(mask |(1<<day));
   }
   masks[i]=mask;
  }
  int mx=0;
  int person1=-1,person2=-1;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int intersection=(masks[i]&masks[j]);
      int common_days=__builtin_popcount(intersection);
      if(common_days>mx)
      {
        mx=common_days;
        person1=i;
        person2=j;
      }
    }
  }
  cout<<"Person1 Index="<<person1<<endl;
  cout<<"Person2 Index="<<person2<<endl;
  cout<<"Mx no_of_workers="<<mx<<endl;
   return 0;
}