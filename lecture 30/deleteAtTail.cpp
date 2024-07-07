// // #include <iostream>
// // using namespace std;
// // class node
// // {
// // public:
// //     int data;
// //     node *next;

// //     node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };
// // void printLinkedList(node *head)
// // {
// //     while (head != NULL)
// //     {
// //         cout << head->data << " ";
// //         head = head->next;
// //     }
// // }
// // void insertAtHead(node *&head, int data)
// // {
// //     node *n = new node(data);
// //     n->next = head;
// //     head = n;
// // }
// // void deleteAtHead(node *&head)
// // {
// //     node* temp = head;
// //     head = temp->next;
// //     delete head;
// // }

// // void deleteAtTail(node *&head)
// // {
// //     if(head == NULL)//Linked List is empty
// //     {
// //         return;
// //     }

// //     if(head->next == NULL)
// //     {
// //         deleteAtHead(head);
// //         return;
// //     }
// //     node *tail = head;
// //     node *prev = NULL;

// //     while (tail->next != NULL)
// //     {
// //         prev = tail;
// //         tail = tail->next;
// //     }
// //     prev->next = NULL;
// //     delete tail;
// // }
// // int main()
// // {
// //     node *head = NULL;
// //     // insertAtHead(head, 50);
// //     // insertAtHead(head, 40);
// //     // insertAtHead(head, 30);
// //     // insertAtHead(head, 20);
// //     // insertAtHead(head, 10);

// //     printLinkedList(head);

// //     deleteAtTail(head);
// //     cout << endl;
// //     printLinkedList(head);
// // }

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

// void printList(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void deleteAtHead(node* &head)
// {
//     if(head == NULL) // Linked-List is empty
//     {
//         return;
//     }
//     node* temp = head;
//     head = head->next;
//     delete temp;
// }

// // void deleteAtTail(node* head)
// // {
// //     node* temp = head;
// //     while(temp ->next->next != NULL)
// //     {
// //         temp = temp->next;
// //     }
// //     temp ->next = NULL;
// // }

// void deleteAtTail(node *&head)
// {
//     if(head == NULL)
//     {
//         // Linked-List is Empty
//         return;
//     }
//     if(head->next == NULL)
//     {
//         deleteAtHead(head);
//         return;
//     }
//     node *prev = NULL;
//     node *tail = head;
//     while (tail->next != NULL)
//     {
//         prev = tail;
//         tail = tail->next;
//     }
//     prev->next = NULL;
//     delete tail;
// }

// int main()
// {
//     node *head = NULL;
//     insertAtHead(head, 50);
//     // insertAtHead(head, 40);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 20);
//     // insertAtHead(head, 10);

//     printList(head);
//     deleteAtTail(head);
//     printList(head);
// }

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void deleteAtTail(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
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
    deleteAtTail(head);
    printList(head);
}
