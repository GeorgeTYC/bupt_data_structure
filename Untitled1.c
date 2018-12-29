#include<stdio.h>
#define N 10000
#define M 100
int main()
{int i,K,a,b,c,d=0;
scanf("%d",&K);
int f[M]={0},e[N]={0};
for(i=0;i<K;i++)
scanf("%d",&f[i]);

{for
  {
   for(b=0;b<=K-1;b++)
      {
	  for(c=0;c<=b;c++)
      e[d]+=f[c];
      }
	  d++;}   
}

for(i=0;i<=(K*(K+1)/2)-1;i++)
   {
   if(e[i]>=e[i+1])
   e[i+1]=e[i];
   }
   if(e[(K*(K+1)/2)-1]>=0)
   printf("%d",e[(K*(K+1)/2)-1]);
   else printf("%d",0);
   return 0;
 }
