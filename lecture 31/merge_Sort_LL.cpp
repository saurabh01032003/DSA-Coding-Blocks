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
node* getMidPoint(node* head)
{
    if(head == NULL)
    {
        return head;
    }
    
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
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
node* mergeSort(node* head)
{
    // Base Case
    if(head == NULL or head->next == NULL)
    {
        return head;
    }

    // Recursive Case
    // 1.Divide the Linked-List around mid-point
    node* midpoint = getMidPoint(head);
    node* head2 = midpoint->next;
    midpoint->next = NULL;

    //2. Merge Sort the two sublists
    head = mergeSort(head);
    head2 = mergeSort(head2);

    // 3. Now merge the two sorted sublists
    node* head3 = merge(head,head2);
    return head3;
}

int main()
{
    node* head = NULL;
    insertAtHead(head, 70);
    insertAtHead(head, 50);
    insertAtHead(head, 30);
    insertAtHead(head, 10);
    insertAtHead(head, 60);
    insertAtHead(head, 40);
    insertAtHead(head, 20);

    node* head4 = mergeSort(head);
    printList(head4);

}