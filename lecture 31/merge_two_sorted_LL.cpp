#include <iostream>
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

void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
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

node *merge(node *head1, node *head2)
{
    // Base Case
    if(head1 == NULL)
    {
        return head2;
    }

    if(head2 == NULL)
    {
        return head1;
    }

    // Recursive Case
    if (head1->data < head2->data)
    {
        node *head = head1;
        head->next = merge(head1->next, head2);
        return head;
    }else{
        node* head = head2;
        head->next = merge(head1,head2->next);
        return head;
    }
}

int main()
{
    node *head1 = NULL;
    insertAtHead(head1, 50);
    insertAtHead(head1, 30);
    insertAtHead(head1, 10);
    printList(head1);

    node *head2 = NULL;
    insertAtHead(head2, 60);
    insertAtHead(head2, 40);
    insertAtHead(head2, 20);
    printList(head2);

    node *head = merge(head1, head2);
    printList(head);
    printList(head);
}
