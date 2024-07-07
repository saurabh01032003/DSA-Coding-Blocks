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
node* removeDuplicates(node* head)
{
    node* prev = head;
    node* curr = head->next;
    while(curr != NULL)
    {
        if(prev->data != curr->data)
        {
            prev->next = curr;
            prev = curr;
            curr = curr-> next;
        }else{
            curr = curr->next;
        // Since Last Node ki agar duplicate hui to wo skip ho jayega
        prev->next = NULL;
        }
    }
    return head;
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

    printList(head);
    head = removeDuplicates(head);
    printList(head);

}