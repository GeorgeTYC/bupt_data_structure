#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num[4];
	for(int i=0;i<4;i++)
	{
		cin>>num[i];
	}
	int array[24][4]={0};
	int count=0;
	int i=0,m=0,n=0,l=0;
	for(i=0;i<4;i++)
	{
		int x=num[i];
		for(m=0;m<4;m++)
		{
			int y=num[m];
			for(n=0;n<4;n++)
			{
				int z=num[n];
				for(l=0;l<4;l++)
				{
					int w=num[l];
					if(x!=y&&y!=z&&z!=w&&w!=x&&y!=w&&x!=z)
					{
						array[count[0]=x;
						array[i][1]=y;
						array[i][2]=z;
						array[i][3]=w;
						count++;
					}
				}
				
			}
		}
	}

for(int q=0;q<24;q++)
{
	for(int k=0;k<4;k++)
	{
		cout<<array[q][k];
	}
	cout<<endl;
}
return 0;
 } 
