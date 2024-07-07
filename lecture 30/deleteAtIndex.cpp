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

node *getNode(node *head, int j)
{
    node *temp = head;
    int k = 0;
    while (k < j and temp != NULL)
    {
        temp = temp->next;
        k++;
    }
    return temp;
}
void deleteAtHead(node *&head)
{
    node *temp = head->next;
    delete head;
    head = temp;
}
void deleteAtIndex(node *&head, int i)
{
    if (i == 0) // Linked list has one node
    {
        deleteAtHead(head);
        return;
    }
    // 1.Get hold of curr pointer
    node *curr = getNode(head, i);

    if (curr == NULL)
    {
        // index i is >= length of Linked-List
        return;
    }

    // 2.Get hold of prev pointer
    node *prev = getNode(head, i - 1);

    // 3.Put address of 3rd index in prev->next
    prev->next = curr->next;

    // 4.Deallocate memory for curr pointer
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

    printLinkedList(head);

    deleteAtIndex(head, 3 );
    printLinkedList(head);
}

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

// // node *getNode(node *head, int j)
// // {
// //     node *temp = head;
// //     int k = 0;
// //     while (k < j and temp != NULL)
// //     {
// //         temp = temp->next;
// //         k++;
// //     }
// //     return temp;
// // }
// // void deleteAtHead(node *&head)
// // {
// //     node *temp = head->next;
// //     delete head;
// //     head = temp;
// // }

// // void deleteAtIndex(node *&head, int i)
// // {
// //     if (i == 0)
// //     {
// //         deleteAtHead(head);
// //         return;
// //     }
// //     node *curr = getNode(head, i);
// //     if (curr == NULL)
// //     {
// //         return;
// //     }
// //     node *prev = getNode(head, i - 1);
// //     prev->next = curr->next;
// //     delete curr;
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

// //     deleteAtIndex(head, 0);
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

// void insertAtHead(node* &head, int data)
// {
//     node* n = new node(data);
//     n->next = head;
//     head = n;
// }
// void printList(node* head)
// {
//     while(head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// node* getNode(node* head, int j)
// {
//     int k = 0;
//     node* temp = head;
//     while(k < j and temp != NULL)
//     {
//         temp = temp->next;
//         k++;
//     }
//     return temp;
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
// void deleteAtIndex(node* &head,int i)
// {
//     if(i == 0)
//     {
//         deleteAtHead(head);
//         return;
//     }
//     node* prev = getNode(head,i-1);
//     node* curr = getNode(head,i);
//     if(curr == NULL)
//     {
//         return;
//     }
//     prev->next = curr->next;
//     delete curr;
// }
// int main()
// {
//     node* head = NULL;
//     insertAtHead(head,50);
//     insertAtHead(head,40);
//     insertAtHead(head,30);
//     insertAtHead(head,20);
//     insertAtHead(head,10);

//     printList(head);
//     deleteAtIndex(head,0);
//     printList(head);

// }