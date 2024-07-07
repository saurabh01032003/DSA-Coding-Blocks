// // // Insertion at Tail

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
// // void insertAtHead(node *&head, int data)
// // {
// //     node *n = new node(data);

// //     n->next = head;

// //     head = n;
// // }
// // void printLinkedList(node *head)
// // {
// //     while (head != NULL)
// //     {
// //         cout << head->data << " ";
// //         head = head->next;
// //     }
// //     cout << endl;
// // }

// // node *getTail(node *head)
// // {
// //     node *temp = head;
// //     while (temp->next) // or (temp ->next != NULL)
// //     {
// //         temp = temp->next;
// //     }
// //     return temp;
// // }

// // void insertAtTail(node *&head, int data)
// // {
// //     if(!head)//!0 == true //if (head == NULL) // LinkedList is Empty
// //     {
// //         insertAtHead(head, data);
// //         return;
// //     }
// //     // 1.Create a new node on the heap with the given data
// //     node *n = new node(data);

// //     // Get hold of Tail pointer
// //     node *tail = getTail(head);

// //     // 3.Update the next field of tail node such that it contains the address of the newly created node
// //     tail->next = n;
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

// //     insertAtTail(head, 60);
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

// node *getTail(node *head)
// {
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     return temp;
// }

// void insertAtTail(node *&head, int val)//to have updated head in main function
// {
//     if(head == NULL)//Empty is Empty
//     {
//         insertAtHead(head,val);
//         return;
//     }
//     node *n = new node(val);
//     node *tail = getTail(head);
//     tail->next = n;
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

// int main()
// {
//     node *head = NULL;
//     // insertAtHead(head, 50);
//     // insertAtHead(head, 40);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 20);
//     // insertAtHead(head, 10);
//     // printLinkedList(head);

//     insertAtTail(head, 60);

//     printLinkedList(head);
// }

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
node *getTail(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
void insertAtTail(node *head, int data)
{
    node *p = new node(data);
    node *tail = getTail(head);
    tail->next = p;
}
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
int main()
{
    node *head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);
    insertAtTail(head, 60);
    printLinkedList(head);
}
