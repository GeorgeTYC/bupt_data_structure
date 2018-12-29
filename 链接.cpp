#include<iostream>
using namespace std;
template<class T>
struct Node
{
	T data;
	struct Node<T>*next;
};
template<class T>
class Linklist
{
public:
	Linklist() {front = new Node<T>; front->next = NULL; }
	Linklist(T a[], int n);
	~Linklist();
	void Printlist();
	void Merge(Linklist <T> &L);
private:
	Node<T>*front;
};
template<class T>
Linklist<T>::Linklist(T a[], int n)
{
	front = new Node<T>;
	front->next = NULL;
	for (int i = n -1; i >= 0; i--)
	{
		Node<T>*s = new Node<T>;
		s->data = a[i];
		s->next = front->next;
		front->next = s;
	}
}
template<class T>
void Linklist<T>::Merge(Linklist <T> &L)
{
	Node<T>*p = front;
	Node<T>*pa = front->next;
	Node<T>*pb = L.front->next;
	while ((pa != NULL)&(pb != NULL))
	{
		if (pa->data <= pb->data)
		{
			p->next = pa;
			p = pa;
			pa = pa->next;
		}
		else
		{
			p->next = pb;
			p = pb;
			pb = pb->next;
		}
	}
	p->next = pa ? pa : pb;
	L.front->next = NULL;
	delete L.front;
	L.front = NULL;
}

template<class T>
Linklist<T>::~Linklist()
{
	Node<T>*p = front;
	while (p)
	{
		front = p;
		p = p->next;
		delete front;
	}
}
template<class T>
void Linklist<T>::Printlist()
{
	Node<T>*p = front;
	while (p->next != NULL)
	{
		p = p->next;
		cout << (p->data) << " ";
	}
	cout << endl;
}

int main()
{
	int a, b;
	cin >> a;
	int*o = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> o[i];
	}
	cin >> b;
	int*o2 = new int[b];
	for (int i = 0; i < b; i++)
	{
		cin >> o2[i];
	}
	if (a == 0 && b != 0)
	{
		Linklist<int> L2(o2, b);
		L2.Printlist();
	}
	if (a != 0 && b == 0)
	{
		Linklist<int> L1(o, a);
		L1.Printlist();
	}
	if (a != 0 && b != 0)
	{
		Linklist<int> L1(o, a);
		Linklist<int> L2(o2, b);
		L1.Merge(L2);
		L1.Printlist();
	}
	return 0;
}
