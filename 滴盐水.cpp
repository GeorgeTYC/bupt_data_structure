#include<iostream>
using namespace std;
int main()
{int vul,d,i,time1,time2;
cin>>vul>>d;
if(vul%d==0)
time1=vul/d;
else time1=vul/d+1;
for(time2=0,i=1;vul>0;i++)
{vul-=d*i;
time2++;
 } 
 cout<<time1+time2-1;
 return 0;
 } 
