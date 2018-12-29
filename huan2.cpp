#include<iostream>
using namespace std;
int main()
{int max,k,n=0,time=0,s,m,cir;
 const int N=100;
 int a[N];
 cin>>max>>k;
 for(int i=0;i<max;i++)
 a[i]=++n;
 for( ;max-time>=0; )
 {m+=k-1;
 cir=m/max-time;
 if((k*(time+1)-time)%(max-time)!=0)
{s=(k*(time+1)-time)%(max-time)-1-cir;
cout<<a[s]<<" ";
for(int i=s;i+1<max;i++)
{a[i]=a[i+1];
}
time++;
}else
{s=max-time-cir;
cout<<a[s]<<" ";
time++;
}
 }
  return 0;
 } 
 
