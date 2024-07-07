// // // // // Reverse Linked List Iterative

// // // // #include <iostream>
// // // // using namespace std;
// // // // class node
// // // // {
// // // // public:
// // // //     int data;
// // // //     node *next;

// // // //     node(int data)
// // // //     {
// // // //         this->data = data;
// // // //         this->next = NULL;
// // // //     }
// // // // };
// // // // void insertAtHead(node *&head, int data)
// // // // {
// // // //     node *n = new node(data);
// // // //     n->next = head;
// // // //     head = n;
// // // // }
// // // // void printLinkedList(node *head)
// // // // {
// // // //     while (head != NULL)
// // // //     {
// // // //         cout << head->data << " ";
// // // //         head = head->next;
// // // //     }
// // // // }
// // // // node *reverseLinkedList(node *head)
// // // // {
// // // //     node *prev = NULL;
// // // //     node *curr = head;
// // // //     while (curr != NULL)
// // // //     {
// // // //         node *temp = curr->next;
// // // //         curr->next = prev;
// // // //         prev = curr;
// // // //         curr = temp;
// // // //     }
// // // //     return prev;
// // // // }
// // // // int main()
// // // // {
// // // //     node *head = NULL;
// // // //     insertAtHead(head, 50);
// // // //     insertAtHead(head, 40);
// // // //     insertAtHead(head, 30);
// // // //     insertAtHead(head, 20);
// // // //     insertAtHead(head, 10);

// // // //     printLinkedList(head);
// // // //     cout << endl;
// // // //     head = reverseLinkedList(head);
// // // //     printLinkedList(head);
// // // // }

// // // // Reverse LinkedList Recursive
// // // #include <iostream>
// // // using namespace std;
// // // class node
// // // {
// // // public:
// // //     int data;
// // //     node *next;

// // //     node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = NULL;
// // //     }
// // // };
// // // void insertAtHead(node *&head, int data)
// // // {
// // //     node *n = new node(data);
// // //     n->next = head;
// // //     head = n;
// // // }
// // // void printLinkedList(node *head)
// // // {
// // //     while (head != NULL)
// // //     {
// // //         cout << head->data << " ";
// // //         head = head->next;
// // //     }
// // // }
// // // node* reverseRecursive(node* head)
// // // {
// // //     // // Base Case
// // //     // if(head == NULL)
// // //     // {
// // //     //     // return head;
// // //     //     return NULL;//Reversing Empty Linked-List
// // //     // }

// // //     // if(head->next == NULL)
// // //     // {
// // //     //     // Your Linked-List has only one node
// // //     //    return head;
// // //     // }

// // //     if(head == NULL or head->next == NULL)
// // //     {
// // //         return head;
// // //     }

// // //     // Recursive Case
// // //     node* revHead = reverseRecursive(head->next);
// // //     node* revTail = head->next;
// // //     // head->next->next = head;
// // //     revTail->next = head;
// // //     head->next = NULL;
// // //     return revHead;

// // // }
// // // int main()
// // // {
// // //     node *head = NULL;
// // //     insertAtHead(head, 50);
// // //     insertAtHead(head, 40);
// // //     insertAtHead(head, 30);
// // //     insertAtHead(head, 20);
// // //     insertAtHead(head, 10);

// // //     printLinkedList(head);
// // //     cout << endl;
// // //     head = reverseRecursive(head);
// // //     printLinkedList(head);
// // // }

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
// // node *reverseIterative(node *head)
// // {
// //     node *curr = head;
// //     node *prev = NULL;
// //     if (head == NULL)
// //     {
// //         cout << "Print Nothing" << endl;
// //         return NULL;
// //     }
// //     if (head->next == NULL)
// //     {
// //         cout << "Print the element" << endl;
// //         return head;
// //     }
// //     while (curr != NULL)
// //     {
// //         node *temp = curr->next;
// //         curr->next = prev;
// //         prev = curr;
// //         curr = temp;
// //     }
// //     return prev;
// // }

// // node *reverseRecursive(node *head)
// // {
// //     // Base Case
// //     if (head == NULL)
// //     {
// //         return head;
// //     }

// //     // Recursive Case
// //     if (head == NULL)
// //     {
// //         return NULL;
// //     }
// //     if (head->next == NULL)
// //     {
// //         return head;
// //     }

// //     node *headFromMyFriend = reverseRecursive(head->next);
// //     head->next->next = head;
// //     head->next = NULL;

// //     return headFromMyFriend;
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

// //     head = reverseIterative(head);
// //     printLinkedList(head);

// //     head = reverseRecursive(head);
// //     printLinkedList(head);
// // }

// // ###########################################################################################################
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
// node *reverseIterative(node *head)
// {
//     node *prev = NULL;
//     node *curr = head;
//     while (curr != NULL)
//     {
//         node *temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//     return prev;
// }
// node *reverseRecursive(node *head)
// {
//     // Base Case
//     if (head == NULL)
//     {
//         return head;
//     }
//     if (head->next == NULL)
//     {
//         return head;
//     }

//     // Recursive Case
//     node *headFromFrnd = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return headFromFrnd;
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
//     head = reverseIterative(head);
//     printLinkedList(head);
//     head = reverseRecursive(head);
//     printLinkedList(head);
// }

// ####################################################################################
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
node *reverseIterative(node *head)
{
    node *prev = NULL;
    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
node *reverseRecursive(node *head)
{
    // Base Case
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }

    // Recursive Case
    node *headFromFriend = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return headFromFriend;
}

//     // Recursive Case
//     node *headFromFrnd = reverseRecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return headFromFrnd;
// }
int main()
{
    node *head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printLinkedList(head);
    head = reverseIterative(head);
    printLinkedList(head);
    head = reverseRecursive(head);
    printLinkedList(head);
}