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
// // int getLength(node *head)
// // {
// //     int cnt = 0;
// //     while (head != NULL)
// //     {
// //         cnt++;
// //         head = head->next;
// //     }
// //     return cnt;
// // }
// // node *kthNodeFromEnd(node *head, int k)
// // {
// //     int l = getLength(head);
// //     int m = l - k;
// //     int i = 0;
// //     while (i < m)
// //     {
// //         head = head->next;
// //         i++;
// //     }
// //     return head;
// // }
// // node *kthFromEnd(node *head, int k)
// // {
// //     node *slow = head;
// //     node *fast = head;
// //     int i = 0;
// //     while (i < k)
// //     {
// //         fast = fast->next;
// //         i++;
// //     }
// //     while (fast != NULL)
// //     {
// //         fast = fast->next;
// //         slow = slow->next;
// //     }
// //     return slow;
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
// //     node *kthEnd = kthNodeFromEnd(head, 2);
// //     cout << kthEnd->data << endl;

// //     cout << kthFromEnd(head, 2)->data << endl;
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
// int getLength(node *head)
// {
//     int cnt = 0;
//     while (head != NULL)
//     {
//         cnt++;
//         head = head->next;
//     }
//     return cnt;
// }

// // Brute Force Method
// node *kthFromEnd(node *head, int k)
// {
//     int n = getLength(head);
//     int j = n-k+1;
//     int i = 1;
//     while(i < j)
//     {
//         head = head->next;
//         i++;
//     }
//     return head;
// }
// node *kthNodeEnd(node* head,int k)
// {
//     node* slow = head;
//     node* fast = head;
//     int i = 1;
//     while(i <= k and fast != NULL) //if fast == NULL(LL is empty) you will dereference NUll ptr inside loop
//     {
//         fast = fast->next;
//         i++;
//     }
//     while(fast != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return slow;
// }
// int main()
// {
//     node *head = NULL;
//     // insertAtHead(head, 50);
//     // insertAtHead(head, 40);
//     // insertAtHead(head, 30);
//     // insertAtHead(head, 20);
//     // insertAtHead(head, 10);

//     printList(head);
//     // cout << getLength(head) << endl;
//     // cout << kthFromEnd(head, 3)->data << endl;
//     kthNodeEnd(head, 3) ? cout << kthNodeEnd(head,3)->data << endl : cout << "Linked List is Empty" << endl;
// }

// #####################################################################################################################################################################
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
int LengthOfList(node* head)
{
    // Base Case
    if(head == NULL)
    {
        return 0;
    }

    // Recursive Case
    return 1+LengthOfList(head->next);
}
node* kthNode(node* head, int k)
{
    //(n-k+1)th node from start
    int length = LengthOfList(head);
    int i = 1; 
    node* temp = head;
    while(i < (length-k+1))
    {
        temp = temp->next;
        i++;
    }
    return temp;
}
node* kthNodeOptimised(node* head,int k)
{
    node* fast = head;
    int i = 1;
    while(i <= k and fast != NULL)
    {
        fast = fast->next;
        i++; 
    }
    node* slow = head;
    while(fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
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
    int k = 4;
    cout << kthNode(head, k)->data << endl;
    cout << kthNodeOptimised(head,k)->data << endl;

}