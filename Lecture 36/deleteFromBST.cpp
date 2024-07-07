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
node* getMaximum(node* root)
{
    if(root == NULL)
    {
        return NULL;
    }
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *deleteNode(node *root, int key)
{
    // Base Case
    if(root == NULL)
    {
        return NULL;//You haven't found root
    }

    // Recursive Case
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }else if(key > root->data)
    {
        root->right = deleteNode(root->right,key);
    }else {
        // root->data == key
        // Case 1: root node is leaf node
        if(root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }else if(root->left == NULL and root->right != NULL)
        {
            // Case 2: root has only right child
            node* temp = root->right;
            delete root;
            root = temp;
        }else if(root->left != NULL and root->right == NULL)
        {
            // Case 3: root has only left child
            node* temp = root->left;
            delete root;
            root = temp;
        }else{
            // Case 4: root has both child nodes
            node* leftMax = getMaximum(root->left);
            swap(root->data,leftMax->data);
            root->left = deleteNode(root->left,key);
        }
    }
    return root;
}
void printInorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    // Recursive Case
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
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

    int key = 5;
    printInorder(root);
    root = deleteNode(root, key);
    cout << endl;
    printInorder(root);
}