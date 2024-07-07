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
// node *kReverse(node *head, int k)
// {
//     node *prev = NULL;
//     node *curr = head;
//     // // Base Case
//     // if (head == NULL)
//     // {
//     //     return NULL;
//     // }
//     if(curr == NULL)
//     {
//         return curr;
//     }

//     // Recursive Case
//     int i = 0;
//     // node *prev = NULL;
//     // node *curr = head;
//     while (curr != NULL and i < k)
//     {
//         node *temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//         i++;
//     }
//     node *headFriend = kReverse(curr, k);
//     head->next = headFriend;
//     return prev;
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
//     head = kReverse(head, 2);
//     printLinkedList(head);
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
node *kReverse(node *head, int k)
{
    // Base Case
    if (head == NULL)
    {
        return head;
    }

    // Recursive Case
    int i = 0;
    node *prev = NULL;
    node *curr = head;
    while (i < k and curr != NULL)
    {
        node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        i++;
    }
    node *headFromFrnd = kReverse(curr, k);
    head->next = headFromFrnd;
    return prev;
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 60);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printList(head);
    int k = 2;
    head = kReverse(head, k);
    printList(head);
}