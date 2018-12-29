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
	Linklist() { front = new Node<T>; front->next = NULL; }
	Linklist(T a[], int n);
	~Linklist();
	void Printlist();
	void Merge(Linklist<T> &L);

private:
	Node<T>*front;

};
Linklist<T>::Linklist(T a[], int a;)
{
	front = new Node<T>;
	front->next = NULL;
	for (int i = n - 1; i >= 0; i--)
	{
		Node<T>*s = new Node<T>;
		s->data = a[i];
		s->next = front->next;
		front->next = s;
	}
}
Linklist<T>::~Linklist()
{
	Node*p = front;
	while (p)
	{
		front = p;
		p = p->next;
		delete front[];
	}

}

void Linklist<T>::Printlist()
{
	Node<T>*p = front;
	while (p->next != NILL)
	{
		p = p->next;
		cout << p->data << " ";
	}
}
void Linklist<T>::Merge(Linklist<T> &L)
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
int main()
{
	int num1, num2;
	cin >> num1;
	int list1[num1 - 1];
	for (int i = 0; i < num1; i++)
	{
		cin >> list1[i];
	}
	cin >> num2;
	int list2[num2 - 1];
	for (int i = 0; i < num2; i++)
	{
		cin >> list2[i];
	}
	if ((num1 == 0) && (num2 != 0)
	{
		Linklist(list2[], num2);
		Printlist();
	}
	if ((num1 != 0) && (num2 == 0))
	{
		Linklist(list1[], num1);
		Printlist();
	}
	if ((num1 != 0) && (num2 != 0))
	{
		Linklist L1(list1[], num1);
		Linklist L2(list2[], num2);
		L1.Merge(L2);
		Printlist();
	}
	return 0;
}
