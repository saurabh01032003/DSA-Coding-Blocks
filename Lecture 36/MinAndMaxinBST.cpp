#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
// This is iterative Algorithm
node* findMin(node* root)
{
    if(root == NULL)
    {
        // Tree is empty(empty tree me kya minimimum)
        return NULL;
    }

    // Left most node is minimum node 
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
 
}

node* findMax(node* root)
{
    if(root == NULL)
    {
        // Tree is empty(empty tree me kya minimimum)
        return NULL;
    }

    // Right most node is minimum node 
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;

}

int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);

    root->right = new node(15);
    root->right->left = new node(13);
    root->right->right = new node(17);

    if(findMin(root) != NULL)
    {
        cout << "Minimum value is : " << findMin(root)->data << endl;
    }
    if(findMax != NULL)
    {
        cout << "Maximum value is : " << findMax(root)->data << endl;
    }
 
}