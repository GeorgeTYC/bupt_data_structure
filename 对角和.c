#include<stdio.h>
#define N 9
main()
{int a[N],i,sum1,sum2;
  for(i=0;i<9;i++)
  scanf("%d",&a[i]);
  sum1=a[0]+a[4]+a[8];
  sum2=a[2]+a[4]+a[6];
  printf("%d %d",sum1,sum2);
 } 
