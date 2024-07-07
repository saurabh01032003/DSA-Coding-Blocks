// // // // Insertion at head

// // // #include <iostream>
// // // using namespace std;
// // // class node
// // // {
// // //     public:
// // //     int data;
// // //     node *next;

// // //     node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = NULL;
// // //     }
// // // };
// // // void insertAtHead(node *&head, int data)//pass by addresss as you wantes to see change in main function
// // // {
// // //     node *n = new node(data);

// // //     n->next = head;

// // //     head = n;
// // // }

// // // // node* insertAtHead(node *head, int data)//pass by addresss as you wantes to see change in main function
// // // // {
// // // //     node *n = new node(data);

// // // //     n->next = head;

// // // //     head = n;

// // // //     return head;
// // // // }

// // // void printLinkedList(node *head)//Pass it by value as
// // // {
// // //     while(head != NULL)
// // //     {
// // //         cout << head->data << " ";
// // //         head = head->next;
// // //     }

// // // }

// // // int main()
// // // {
// // //     node *head = NULL;

// // //     // head = insertAtHead(head, 50);
// // //     // head = insertAtHead(head, 30);
// // //     // head = insertAtHead(head, 40);
// // //     // head = insertAtHead(head, 20);
// // //     // head = insertAtHead(head, 10);

// // //     insertAtHead(head, 50);
// // //     insertAtHead(head, 30);
// // //     insertAtHead(head, 40);
// // //     insertAtHead(head, 20);
// // //     insertAtHead(head, 10);

// // //     printLinkedList(head);// abhi apne head me 10 ka address hai
// // // }

// // // ***************##################********************
// // #include <iostream>
// // using namespace std;
// // class node{\
// // public:
// //     int data;
// //     node* next;
// //     node (int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }
// // };
// // void insertAthead(node *&head,int data)
// // {
// //     node* n = new node(data);

// //     n->next = head;

// //     head = n;

// // }

// // // node* insertAthead(node *&head,int data)
// // // {
// // //     node* n = new node(data);

// // //     n->next = head;

// // //     head = n;
// // //     return head;

// // // }
// // void printLinkedList(node* head)
// // {
// //     while(head)
// //     {
// //         cout << head->data << " ";
// //         head= head->next;
// //     }
// // }
// // int main()
// // {
// //     node* head = NULL;//Initially linkedlist is empty

// //     insertAthead(head,50);
// //     insertAthead(head,40);
// //     insertAthead(head,30);
// //     insertAthead(head,20);
// //     insertAthead(head,10);

// //     // head = insertAthead(head,50);
// //     // head = insertAthead(head,40);
// //     // head = insertAthead(head,30);
// //     // head = insertAthead(head,20);
// //     // head = insertAthead(head,10);
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

// void PrintLinkedList(node *head)
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
//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);
//     PrintLinkedList(head);
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
}