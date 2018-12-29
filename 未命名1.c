#include<stdio.h>
#define N 10000
#define M 100
main()
{int i,K,a,b,c,d=0,q=0;
scanf("%d",&K);
int f[M]={0},e[N]={0},m[N]={0},n[N]={0};
for(i=0;i<K;i++)
scanf("%d",&f[i]);
{
for(a=0;a<=K-1;a++)
   {
   for(b=a;b<=K-1;b++,d++)
      {
	  for(c=a;c<=b;c++)
      {
	  e[d]+=f[c];
      m[d]=a;
      n[d]=b;
      }
      }
	  
    }
}
for(i=0;i<=(K*(K+1)/2)-2;i++)
   {if(e[i]=e[i+1]&&((n[i]-m[i])>=(n[i+1]-m[i+1])))
   {
   e[i+1]=e[i];
   m[i+1]=m[i];
   n[i+1]=n[i];
   }
   
   else if(e[i]>e[i+1])
   {
   e[i+1]=e[i];
   m[i+1]=m[i];
   n[i+1]=n[i];
   }
   }
for(i=0;i<=K-1;i++)
{if(f[i]<0)
q+=1;
}

if(q<K)
printf("%d %d %d",e[(K*(K+1)/2)-1],f[m[(K*(K+1)/2)-1]],f[n[(K*(K+1)/2)-1]]);
else 
printf("%d %d %d",0,f[0],f[K-1]);
 } 
 
