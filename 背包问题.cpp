#include<iostream>
using namespace std;
int main()
{
	int s, n;
	cin >> s >> n;
	int *m1 = new int[n];
	int *m2 = new int[n];
	int resultcount = 0;
	int count = 0;
	int allcount = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> m1[i];
		m2[i] = 0;
		allcount *= 2;
	}
	while (1)
	{
		for (int i = 0; i < n; i++)
		{
			if (0 == m2[i])
			{
				m2[i] = 1;
			}
			else
			{
				m2[i] = 0;
				break;
			}
		}
		int temp = 0;
		for (int i = 0; i <n; i++)
		{
			if (m2[i] == 1)
				temp += m1[i];
		}
		if (temp == s)
		{
			resultcount += 1;
		}
		count++;
		if (count == allcount)
		{
			break;
		}
	}
	cout << resultcount << endl;
	delete[]m1;
	delete[]m2;
	return 0;
}
