#include <iostream>
using namespace std;
int main()
{
int a[100],x,y,z,i,m;
char e,f;
a[1]=31,a[2]=28,a[3]=31,a[4]=30,a[5]=31,a[6]=30,a[7]=31,a[8]=31,a[9]=30,a[10]=31,a[11]=30,a[12]=31;
while(cin>>x>>e>>y>>f>>z)
{
m=0;
if(x%4==0&&x%100!=0||x%400==0)
a[2]=29;
for(i=1;i<y;i++)
m=m+a[i];
cout<<m+z<<endl;
}
return 0;
}
