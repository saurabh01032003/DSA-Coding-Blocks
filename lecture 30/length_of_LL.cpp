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
// // int lengthIterative(node *head)
// // {
// //     int count = 0;
// //     while (head != NULL)
// //     {
// //         count++;
// //         head = head->next;
// //     }
// //     return count;
// // }
// // int lengthRecursive(node *&head)
// // {
// //     // Base Case
// //     if (head == NULL)
// //     {
// //         return 0;
// //     }

// //     // Recursive Case
// //     return lengthRecursive(head->next) + 1;
// // }
// // int main()
// // {
// //     node *head = NULL;
// //     insertAtHead(head, 50);
// //     insertAtHead(head, 40);
// //     insertAtHead(head, 30);
// //     insertAtHead(head, 20);
// //     insertAtHead(head, 10);

// //     cout << lengthIterative(head) << endl;
// //     cout << lengthRecursive(head) << endl;
// // }

// // ########################################################################

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
// int lengthIterative(node *head)
// {
//     int cnt = 0;
//     while (head != NULL)
//     {
//         cnt++;
//         head = head->next;
//     }
//     return cnt;
// }
// int lengthRecursive(node *head)
// {
//     // Base Case
//     if (head == NULL)
//     {
//         return 0;
//     }

//     // Recursive Case
//     return 1 + lengthRecursive(head->next);
// }
// int main()
// {
//     node *head = NULL;
//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);
//     insertAtHead(head, 20);
//     insertAtHead(head, 10);
//     insertAtHead(head, 50);
//     insertAtHead(head, 40);
//     insertAtHead(head, 30);

//     printList(head);
//     cout << lengthIterative(head) << endl;
//     cout << lengthRecursive(head) << endl;
// }

// ########################################################################################################
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int LengthIterative(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
int LengthRecursive(node *head)
{
    // Base Case
    if (head == NULL)
    {
        return 0;
    }

    // Recursive Case
    return 1 + LengthIterative(head->next);
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
    cout << LengthIterative(head) << " is the length of LinkedList" << endl;
    cout << LengthRecursive(head) << " is the length of LinkedList" << endl;
}