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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *kRotate(node *head, int k)
{
    // 1. form a loop by connecting the tail Node of  the
	//linkedList with the head node of the linkedList also calculate length while reaching tail node  
    node *tail = head;
    int n = 1;
    while (tail->next != NULL)
    {
        tail = tail->next;
        n++;
    }
    tail->next = head;

    // 2. get hold of the pointer to the new tail Node 
	//    that can be found at the (n-(k%n)-1)th index
    node *newTail = head;
    int i = 0;
    while (i < ((n - (k % n)) - 1))
    {
        newTail = newTail->next;
        i++;
    }

    // 3. get hold of the pointer to the new head Node 
    node* newHead = newTail->next;

    // 4. remove the cycle by updating the next pointer of
	//    the new tail node to contain the NULL address and return new Head node
    newTail->next = NULL;
    return newHead;
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printList(head);

    int k = 3;
    head = kRotate(head, k);
    printList(head);
}