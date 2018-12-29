#include<iostream>
using namespace std;

int f(int n)
{if(n>0&&n<4)
 return 1;
 else if(n>=4)
 return f(n-1)+f(n-3);
}

int main()
{int a,n;

cin>>n;
a=f(n);
cout<<a<<endl;
return 0;
}
