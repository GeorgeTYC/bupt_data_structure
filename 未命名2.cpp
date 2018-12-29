#include <iostream>
using namespace std;
int judge(int S,int num[i-1])
{   int S,num[i-1];
    if (S== 0)
    {
        return 1;
    }
    else
    {   if(i-1<0)
        return 0;
        if ( judge(S-num[i-2],num[i-2]) )
        {
           return 2;
        }
        else
            return judge(S-num[i-2],num[i-2]);
    }
}

int main()
{
    int S,i,a;
    const N 100;
    cin>>S>>i;
    int num[N];
    for(a=0;a<i;a++)
    {cin>>num[a];
	}
	n=judge(S,num[i-1]);
	cout<<n<<endl;
	return n;
}
