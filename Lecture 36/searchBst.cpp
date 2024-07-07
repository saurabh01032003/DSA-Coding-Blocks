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
bool searchBST(node* root,int key)
{
    // Base Case
    if(root == NULL)
    {
        // You haven't found key in tree
        return false;
    }

    // Recursive Case
    if(key == root->data)
    {
        // Key found in BST
        return true;
    }else if(key < root->data)
    {
        // Search key in LeftSubtree->friend
        return searchBST(root->left,key);
    }else{
        // Search key in RightSubtree->friend
        return searchBST(root->right,key);
    }
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

    int key = 11;
    searchBST(root,key) ? cout << "Key found!" << endl : cout << "Key not found!" << endl;
}
