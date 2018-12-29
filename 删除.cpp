#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
class LinkList
{
public:
    LinkList() { front = new Node; front->next = NULL; }
    LinkList(int a[], int n); 
    Node*front;
};
LinkList::LinkList(int a[], int n)
{
    front = new Node;
    front->next = NULL;
    for (int i = n - 1;i >= 0;i--)
    {
        Node*s = new Node;
        s->data = a[i];
        s->next = front->next;
        front->next = s;
    }
}
int main()
{
    int n;
    cin >> n;
    int*a = new int[n];
    int*b = new int[n];
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    if (n == 0)
        cout << "empty";
    else
    {
        int j = 0, i = 0, k;
        while (i < n - 1)
        {
            if (a[i] != a[i + 1])
            {
                b[j++] = a[i];
                i++;
            }
            else
            {
                for (k = i + 1; k < n; k++)
                {
                    if (a[k] != a[i]) break;
                }
                i = k;
            }
        }
        if (a[n - 2] != a[n - 1])
            b[j++] = a[n - 1];
        if (j != 0)
        {
            for (int i = 0; i < j; i++)
                cout << b[i] << " ";
        }
        else
            cout << "empty";
    }
    return 0;
}
