#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node* &head,int data)
{
    node* n = new node(data);
    n->next = head;
    head = n;
}
void printList(node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
node* removeDuplicates2(node* head)
{
    // Base Case
    if(head == NULL or head->next == NULL)
    {
        return head;
    }

    // Recursive Case
    if(head->data != head->next->data)
    {
        // node* temp = head;
        head->next = removeDuplicates2(head->next);
        return head;
    }else{
        while(head->next != NULL and head->data == head->next->data)
        {
            head = head->next;
        }
        return removeDuplicates2(head->next);
    }
}
int main()
{
    node* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 10);

    printList(head);
    head = removeDuplicates2(head);
    printList(head);
}