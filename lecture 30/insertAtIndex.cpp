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
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// node *getPrevNode(node *head, int j)
// {
//     int k = 0;
//     node *temp = head;
//     while (k < j and temp != NULL) // Linked list must not be empty
//     {
//         temp = temp->next;
//         k++;
//     }
//     return temp;
// }

// void insertAtIndex(node *&head, int data, int i)//head ko by reference pass kiye hai kyonki (i == 0) pr insertAtHead function call hua hai jisme head update hota hai
// {
//     if (i == 0)
//     {
//         // Insertion at 0th index is equivalent to insertion at Head
//         insertAtHead(head, data);
//         return;
//     }
//     node *n = new node(data);
//     node *prev = getPrevNode(head, i - 1);
//     // if ith index is not valid (i.e ith index is greator than size of Linked List)
//     if (prev == NULL)
//     {
//         return;
//     }
//     n->next = prev->next;
//     prev->next = n;
// }
// int main()
// {
//     node *head = NULL;

//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);

//     printLinkedList(head);

//     insertAtIndex(head, 25, 5);
//     cout << endl;
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
node *getNode(node *head, int i)
{
    int j = 1;
    node *temp = head;
    while (j < i and temp != NULL)
    {
        temp = temp->next;
        j++;
    }
    return temp;
}
void insertAtIndex(node *&head, int data, int idx)
{
    if(idx == 0)
    {
        insertAtHead(head,data);
        return;
    }
    node *n = new node(data);
    node *prev = getNode(head, idx);
    if(prev == NULL)
    {
        return;
    }
    n->next = prev->next;
    prev->next = n;
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
    insertAtIndex(head, 25, 0);
    printList(head);
}