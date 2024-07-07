#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node (int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node* &head, int data)
{
    node* n = new node(data);
    n->next = head;
    head = n;
}
void printList(node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* sumOfList2(node* head1, node* head2)
{
    node* head = NULL;
    int carry = 0;
    while(head1 != NULL || head2 != NULL || carry == 1)
    {
        int d1;
        int d2;
        if(head1 != NULL)
        {
            d1 = head1->data;
        }else{
            d1 = 0;
        }

        if(head2!= NULL)
        {
            d2 = head2->data;
        }else{
            d2 = 0;
        }

        int sum = d1+d2+carry;
        node* n = new node(sum%10);
        n->next = head;
        head = n;

        carry = sum/10;
        if(head1)
        {
            head1 = head1->next;
        }else{
            head1 = NULL;
        }
        
        if(head2)
        {
            head2 = head2->next;
        }else{
            head2 = NULL;
        }
    }
    return head;
}

// node* sumOfList(node* head1,node* head2)
// {
//     int carry = 0;
//     node* head = NULL;

//     while(head1 != NULL and head2 != NULL)
//     {
//         int d1 = head1->data;
//         int d2 = head2->data;
//         int sum = d1 + d2 + carry;

//         node* n = new node(sum%10);
//         n->next = head;
//         head = n;

//         head1 = head1->next;
//         head2 = head2->next;
//         carry = sum/10;        
//     }
//     while(head1 != NULL)
//     {
//         int d1 = head1->data;
//         int sum = d1 + carry;

//         node* n = new node(sum%10);
//         n->next = head;
//         head = n;

//         head1 = head1->next;
//         carry = sum/10; 

//     }
    
//     while(head2 != NULL)
//     {
//         int d2 = head2->data;
//         int sum = d2 + carry;

//         node* n = new node(sum%10);
//         n->next = head;
//         head = n;

//         head2 = head2->next;
//         carry = sum/10; 

//     }
//     if(carry == 1)
//     {
//         node* n = new node(1);
//         n->next = head;
//         head = n;
//     }
//     return head;
// }
int main()
{
    node* head1 = NULL;
    insertAtHead(head1,1);
    insertAtHead(head1,2);
    insertAtHead(head1,3);
    printList(head1);

    node* head2 = NULL;    
    insertAtHead(head2,9);
    insertAtHead(head2,8);
    insertAtHead(head2,9);
    printList(head2);

    // node* head = sumOfList(head1,head2);
    // printList(head);
    node* head = sumOfList2(head1,head2);
    printList(head);

}