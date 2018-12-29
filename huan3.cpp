#include<iostream>
using namespace std;
int main()
{int max,k,n=0,time=0,s=0,m;
 const int N=100;
 int a[N];
 cin>>max>>k;
 for(int i=0;i<max;i++)
 a[i]=++n;
 for( ;max-time>=0; )
 {s+=k-1;
  m=s/(max-time);
  s=s-m-m*(max-time);
  cout<<a[s]<<" ";
  for(int i=s;i<max-time;i++)
  time++;
 }
 return 0;
}
