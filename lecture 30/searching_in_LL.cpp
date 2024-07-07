// // // #include <iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node* next;

// // //     node(int data)
// // //     {
// // //         this->data = data;
// // //         this->next = NULL;
// // //     }
// // // };
// // // bool searchingLL(node* head, int target)
// // // {
// // //     while(head != NULL)
// // //     {
// // //         if(head->data == target)
// // //         {
// // //             return true;
// // //         }
// // //         head = head->next;
// // //     }
// // //     return false;
// // // }

// // // void insertAtHead(node* &head,int data)
// // // {
// // //     node * n = new node(data);
// // //     n->next = head;
// // //     head = n;
// // // }
// // // int main()
// // // {
// // //     node *head = NULL;
// // //     insertAtHead(head,50);
// // //     insertAtHead(head,40);
// // //     insertAtHead(head,30);
// // //     insertAtHead(head,20);
// // //     insertAtHead(head,10);

// // //     int target = 300;
// // //     searchingLL(head,target) ? cout << "Target Found" << endl :cout << "Target Not Found" << endl;

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
// // bool searchRecursive(node *&head, int target)
// // {
// //     // Base Case
// //     if (head == NULL)
// //     {
// //         return false;
// //     }

// //     // Recursive Case
// //     if (target == head->data)
// //     {
// //         return true;
// //     }
// //     else
// //     {
// //         searchRecursive(head->next, target);
// //     }
// // }

// // void insertAtHead(node *&head, int data)
// // {
// //     node *n = new node(data);
// //     n->next = head;
// //     head = n;
// // }
// // int main()
// // {
// //     node *head = NULL;
// //     insertAtHead(head, 50);
// //     insertAtHead(head, 40);
// //     insertAtHead(head, 30);
// //     insertAtHead(head, 20);
// //     insertAtHead(head, 10);

// //     int target = 23;
// //     searchRecursive(head, target) ? cout << target << " is found" << endl : cout << target << " is not Found" << endl;
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
// void printLinkedList(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// bool searchIterative(node *head, int target)
// {
//     while (head != NULL)
//     {
//         if (head->data == target)
//         {
//             return true;
//         }
//         head = head->next;
//     }
//     return false;
// }
// bool searchRecursive(node*head,int target)
// {
//     // Base Case
//     if(head == NULL)
//     {
//         return false;
//     }

//     // Recursive Case
//     if(head->data == target)
//     {
//         return true;
//     }else{
//         searchRecursive(head->next,target);
//     }
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
//     int target = 30;
//     searchIterative(head, target) ? cout << target << " is found" << endl : cout << target << " is not found" << endl;

//     searchRecursive(head, target) ? cout << target << " is found" << endl : cout << target << " is not found" << endl;

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
bool SearchIterative(node *head, int target)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
bool SearchRecursive(node *head, int target)
{
    // Base Case
    if (head == NULL)
    {
        return false;
    }

    // Recursive Case
    if (head->data == target)
    {
        return true;
    }
    else
    {
        SearchRecursive(head->next, target);
    }
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    int target = 30;

    SearchIterative(head, target) ? cout << "Target Found!" << endl : cout << target << " not Found!" << endl;
    SearchRecursive(head, target) ? cout << "Target Found!" << endl : cout << target << " not Found!" << endl;
}