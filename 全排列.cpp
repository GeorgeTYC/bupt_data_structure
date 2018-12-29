#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    //交换a和b
    int temp = a;
    a = b;
    b = temp;
}
void perm(int list[], int k, int m)
{
    if (k == m)//递归的基础部分
    {
        for (int i = 0; i <= m; i++)
        {
            cout << list[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = k; i <= m; i++)
        {
            swap(list[k], list[i]);
            perm(list, k + 1, m);
            swap(list[k], list[i]);
        }
    }
}
int main()
{
	int s[4]={4, 7, 2, 3};
	perm(s,0,3);
	return 0;
}
