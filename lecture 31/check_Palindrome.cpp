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
node* getMidPoint(node* head)
{
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node* reverseLinkedList(node* head)
{
    node* prev = NULL;
    node* curr = head;
    while(curr != NULL)
    {
        node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool checkPalindrome(node* head)
{
    node* midPoint = getMidPoint(head);
    node* head2 = midPoint->next;
    midPoint->next = NULL;
    node* head3  = reverseLinkedList(head2);
    midPoint->next = NULL;
    while(head != NULL and head3 != NULL)
    {
        if(head->data != head3->data)
        {
            return false;
        }
        head = head->next;
        head3 = head3->next;
    }
    return true;

}
int main()
{
    node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printList(head);
    cout << getMidPoint(head)->data << endl;
    checkPalindrome(head) ? cout << "Palindrome" << endl : cout << "Not Palindrome!" << endl;


}