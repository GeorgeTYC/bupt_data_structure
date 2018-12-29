#include<iostream>
using namespace std;

class node {
public:
	node(int i) :data(i), next(0) {};
	int data;
	node *next;
};
node *creat(int n) {
	node *first=NULL, *p=NULL;
	for (int i = 1; i <= n; i++) {
		if (i == 1) p = first = new node(i);
		else {
			node *q = new node(i);
			p->next = q;
			p = p->next;
		}
	}
	p->next = first;
	return first;
}
void Jose(node *first, int k)
{
	node *p = first;
	node *q = p->next;
	int i = 1;
	while (p != q)
	{
		if (i != k) {
			p = q;
			q = p->next;
			i++;
		}
		else {
			cout << p->data << " ";
			p->data = q->data;
			p->next = q->next;
			delete q;
			q = p->next;
			i = 1;
		}
	}
	cout << p->data << endl;
}
int main() {
	int n, k;
	cin >> n >> k;
	node *first = creat(n);
	Jose(first, k);
	return 0;
}
