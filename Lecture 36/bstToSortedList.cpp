#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
class Pair
{
public:
    node *head;
    node *tail;
};

// //Leetcode Flatten Binary Tree
// Pair preOrderTree(node *root)
// {
//     Pair p;
//     // Base Case
//     if (root == NULL)
//     {
//         p.head = NULL;
//         p.tail = NULL;
//         return p;
//     }

//     // Recursive Case
//     Pair pL = preOrderTree(root->left);
//     Pair pR = preOrderTree(root->right);
//     if (pL.head == NULL and pR.head != NULL)
//     {
//         root->right = pR.head;
//         p.head = root;
//         p.tail = pR.tail;
//         return p;
//     }
//     else if (pL.head != NULL and pR.head == NULL)
//     {
//         root->right = pL.head;
//         p.head = root;
//         p.tail = pL.tail;
//         return p;
//     }
//     else if (pL.head == NULL and pR.head == NULL)
//     {
//         p.head = root;
//         p.tail = root;
//         return p;
//     }
//     else
//     { // if (pL.head != NULL and pR.head != NULL) {
//         root->right = pL.head;
//         pL.tail->right = pR.head;
//         p.head = root;
//         p.tail = pR.tail;
//         return p;
//     }
// }

Pair bstToSortedList(node *root)
{
    Pair p;
    // Base Case
    if (root == NULL)
    {
        p.head = NULL;
        p.tail = NULL;
        return p;
    }

    // Recursive Case
    // 1.Convert the LeftSubtree into a sorted Linked-List
    Pair pL = bstToSortedList(root->left);
    if (pL.head != NULL)
    {
        pL.tail->right = root;
        p.head = pL.head;
    }
    else
    {
        p.head = root;
    }

    // Convert the RightSubtree into Sorted Linked-List
    Pair pR = bstToSortedList(root->right);
    if (pR.head != NULL)
    {
        root->right = pR.head;
        p.tail = pR.tail;
    }
    else
    {
        p.tail = root;
    }

    return p;
}

// Pair bstToSortedList(node *root)
// {
//     Pair p;
//     // Base Case
//     if (root == NULL)
//     {
//         return {root, root};
//     }

//     // Recursive Case
//     // Convert LeftSubtree To Soted List
//     Pair pL = bstToSortedList(root->left);

//     // Convert Right Subtree to sortedL List
//     Pair pR = bstToSortedList(root->right);

//     if (pL.head == NULL and pR.head != NULL)
//     {
//         root->right = pR.head;
//         p.head = root;
//         p.tail = pR.tail;
//         return p;
//     }
//     else if (pL.head != NULL and pR.head == NULL)
//     {
//         pL.tail->right = root;
//         p.head = pL.head;
//         p.tail = root;
//         return p;
//     }
//     else if (pL.head == NULL and pR.head == NULL)
//     {
//         p.head = root;
//         p.tail = root;
//         return p;
//     }
//     else
//     { // if (pL.head != NULL and pR.head != NULL) {
//         pL.tail->right = root;
//         root->right = pR.head;
//         p.head = pL.head;
//         p.tail = pR.tail;
//         return p;
//     }
// }

void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
    cout << endl;
}
int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);

    root->right = new node(15);
    root->right->left = new node(13);
    root->right->right = new node(17);

    // node *root = new node(1);
    // root->left = new node(2);
    // root->left->left = new node(3);
    // root->left->right = new node(4);

    // root->right = new node(5);
    // root->right->right = new node(6);
    // node* root = new node(0);
    // node * root = NULL;
    if (root == NULL)
    {
        cout << "Fuck off!" << endl;
        return 0;
    }

    printList(bstToSortedList(root).head);
    // printList(preOrderTree(root).head);
}