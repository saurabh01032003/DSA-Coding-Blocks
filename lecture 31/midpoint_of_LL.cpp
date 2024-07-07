// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertAtHead(node *&head, int data)
// {
//     node *n = new node(data);
//     n->next = head;
//     head = n;
// }
// void printLinkedList(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// // int getLength(node* head)
// // {
// //     int cnt = 0;
// //     while(head != NULL)
// //     {
// //         cnt++;
// //         head = head->next;
// //     }
// //     return cnt;
// // }
// // int main()
// // {
// //     node *head = NULL;
// //     insertAtHead(head, 50);
// //     insertAtHead(head, 40);
// //     insertAtHead(head, 30);
// //     insertAtHead(head, 20);
// //     insertAtHead(head, 10);

// //     printLinkedList(head);
// //     int length = getLength(head);
// //     int k = length/2;
// //     int i = 0;
// //     while(i < k)
// //     {
// //         head = head->next;
// //         i++;
// //     }
// //     cout << head->data << endl;

// // }
// node *getMid(node *head)
// {
//     node *slow = head;
//     node *fast = head;
//     while (fast != NULL and fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtHead(head, 60);
//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);
//     printLinkedList(head);

//     node *mid = getMid(head);
//     cout << mid->data << endl;
// }

// ###################################################################################################################

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
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int LengthRecursive(node* head)
{
    // Base Case 
    if(head == NULL)
    {
        return 0;
    }

    // Recursive Case
    return 1+LengthRecursive(head->next);
}
node* MidPointBrute(node* head,int n)
{
    int i = 0;
    node* temp = head; 
    while(i < n)
    {
        temp = temp->next;
        i++;
    }
    return temp;

}

node* getMidPoint(node* head)
{
    if(head == NULL)
    {
        return;
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
int main()
{
    node* head = NULL;
    insertAtHead(head, 60);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printLinkedList(head);

    int n = LengthRecursive(head)/2;
    node* p = MidPointBrute(head,n);
    cout <<"By Brute Force "<<  p->data << endl;
    node* hare = getMidPoint(head);
    cout <<"By hare and tortoise method " << hare->data << endl;
    

}