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
private:
	Node<T>*front;
};
template<class T>
Linklist<T>::Linklist(T a[], int n)
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
{int size,k=0;
 cin>>size;
 const int N=100;
 int list[N];
 for(int i=0;i<size;i++)
 {cin>>list[i];
 }
 for(int a=0;a<size-k;a++)
 {for(int b=a+1;b<size-k;b++)
 {
 
 if(list[a]==list[b])
 {
 k++;
 for( ;b+1<size-k+1;b++)
 {list[b]=list[b+1];
 }
}
}
 for( ;a+1<size-k+1;a++)
 {list[a]=list[a+1];
 }
 k++;
 }
 if(size-k!=0)
 {
 int* p;
 p=list;
 Linklist <int>L(p,size-k);
 L.Printlist();
 }
 else cout<<"enpty"<<endl;
 return 0;
}
