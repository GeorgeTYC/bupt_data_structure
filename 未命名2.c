#include <stdio.h>

int main()
{
int i,m,y,d,t;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
while(scanf("%d/%d/%d",&y,&m,&d))
{ 
t=0;
for(i=0;i<m;i++)
{
t+=a[i];
}
t+=d;
if((y%4==0)&&(m>=2)&&(y%100!=0))
t++;

printf("%d\n",t);
}

return 0;

} 
