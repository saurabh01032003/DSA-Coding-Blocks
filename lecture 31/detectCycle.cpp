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
// bool isCyclePresent(node *head)
// {
//     node *slow = head;
//     node *fast = head;
//     while (fast != NULL and fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (fast == slow)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// void removeCycle(node* head) {

// 	// 1. find the meeting point

// 	node* slow = head;
// 	node* fast = head;

// 	while(true) {
// 		slow = slow->next;
// 		fast = fast->next->next;
// 		if(slow == fast) {
// 			// cycle found
// 			break;
// 		}
// 	}

// 	// slow and fast are at meeting point

// 	node* prev = head;
// 	while(prev->next != slow) { // prev->next != fast
// 		prev = prev->next;
// 	}

// 	slow = head;
// 	while(slow != fast) {
// 		slow = slow->next;
// 		fast = fast->next;
// 		prev = prev->next;
// 	}

// 	prev->next = NULL;


// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);
//     head->next->next->next->next->next->next = new node(70);
//     head->next->next->next->next->next->next->next = new node(80);
//     head->next->next->next->next->next->next->next->next = head->next->next->next;
//     isCyclePresent(head) ? cout << "Cycle is Present " << endl : cout << "Cycle is not Present" << endl;

// } 


// ##################################################################################################################################################
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
bool detectCycle(node* head)
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    head->next->next->next->next->next->next = new node(70);
    head->next->next->next->next->next->next->next = new node(80);
    head->next->next->next->next->next->next->next->next = head->next->next->next;  

    detectCycle(head) ? cout << "Cycle is present" << endl : cout << "Cycle is not present !" << endl;  
}