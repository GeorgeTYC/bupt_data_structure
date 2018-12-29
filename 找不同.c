#include<stdio.h>
#define N 100
main()
{int i,num,m,K,n=0,
    a[N]={0};
    scanf("%d",&K);
for(i=0;i<K;i++)
scanf("%d",&a[i]);
{
for(i=0;i<K;i++)
   {
   {
   for(m=0,n=0;m<K;m++)
   {if(a[i]==a[m])
    {
	 n++;num=i;
   }
   }
   if(n==1)
   break;
   }
   if(n==1)
   break;
   }
   printf("%d",a[num]);
}
 } 
