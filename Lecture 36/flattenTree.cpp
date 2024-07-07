// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int data)
//     {
//         this->data = data;
//         this->left = this->right = NULL;
//     }
// };
// class Pair
// {
// public:
//     node *head;
//     node *tail;
// };

// // //Leetcode Flatten Binary Tree
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
//         root->right = pL.head;//i.e root->right me toh sahi value daal diye but left me bhi same value padi hai to
//         root->left = NULL;//Usko bhi NULL karo
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
//         root->left = NULL;
//         pL.tail->right = pR.head;
//         p.head = root;
//         p.tail = pR.tail;
//         return p;
//     }
// }
// void printList(node* head)
// {
//     while(head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->right;
//     }
//     cout << endl;
// }
// int main()
// {
//     node *root = new node(1);
//     root->left = new node(2);
//     root->left->left = new node(3);
//     root->left->right = new node(4);

//     root->right = new node(5);
//     root->right->right = new node(6);

//     // node* root = new node(0);
//     // node * root = NULL;

//     if(root == NULL)
//     {
//         cout << "fuck off!";
//         return 0;
//     }

//     node* listHead = preOrderTree(root).head;
//     printList(listHead);
// }

#include <bits/stdc++.h>
// #define N  -1
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
node *buildTree()
{
    int rootData;
    cin >> rootData;

    node *root = new node(rootData);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();

        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            node *leftChild = new node(leftData);
            front->left = leftChild;
            q.push(leftChild);
        }

        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            node *rightChild = new node(rightData);
            front->right = rightChild;
            q.push(rightChild);
        }
    }
    return root;
}
class Pair
{
public:
    node *head;
    node *tail;
};

Pair flattenTree(node *root)
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
    // 1.leftSubtree Friend
    Pair pL = flattenTree(root->left);

    Pair pR = flattenTree(root->right);

    p.head = root;
    if (pL.head == NULL and pR.head != NULL)
    {
        root->right = pR.head;
        p.tail = pR.tail;
    }
    else if (pL.head == NULL and pR.head == NULL)
    {
        p.tail = root;
    }
    else if (pL.head != NULL and pR.head == NULL)
    {
        root->right = pL.head;
        root->left = NULL;
        p.tail = pL.tail;
    }
    else if (pL.head != NULL and pR.head != NULL)
    {
        root->right = pL.head;
        root->left = NULL;
        pL.tail->right = pR.head;
        p.tail = pR.tail;
    }
    return p;
}
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
    node *root = buildTree();
    Pair p = flattenTree(root);
    // node* head = p.head;
    printList(p.head);
}
