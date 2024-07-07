#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class customComperator
{
public:
    bool operator()(node *a, node *b)
    {
        return a->data > b->data; // Return true if swap is required
    }
};
node *mergeKSortedList(vector<node*> v)
{
    priority_queue<node *, vector<node *>, customComperator> minHeap;
    
    for(int i = 0; i < v.size();i++)
    {
        if(v[i] != NULL)
        {
            minHeap.push(v[i]);
        }
    }
    node *head = new node(0);
    node *temp = head;

    while (!minHeap.empty())
    {
        node *minNode = minHeap.top();
        temp->next = minNode;
        minHeap.pop();
        temp = temp->next;
        if (minNode->next != NULL)
        {
            minHeap.push(minNode->next);
        }
    }
    return head->next;
}
void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    node *head1 = new node(1);
    head1->next = new node(4);
    head1->next->next = new node(7);

    node *head2 = new node(2);
    head2->next = new node(5);
    head2->next->next = new node(8);

    node *head3 = new node(3);
    head3->next = new node(6);
    head3->next->next = new node(9);
    head3->next->next->next = new node(15);

    vector<node *> v = {head1, head2, head3};
    node *head = mergeKSortedList(v);
    printList(head);
}