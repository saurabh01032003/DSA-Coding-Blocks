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
        this->left = NULL;
        this->right = NULL;
    }
};
void printPreOrder(node* root)
{
    if(root == NULL)
    {
        cout << -1 <<" ";
        return;
    }

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);    
}

node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);

    root->left = buildTree();
    root->right = buildTree();
    return root;
}
node *mirrorTree(node * root)
{
    // Base Case
    if (root == NULL)
    {
        return NULL;
    }

    // Recursive Case
    // 1.Mirrored the left Subtree
    node* rightMeveje = mirrorTree(root->left);

    // 2.Mirrored the right Subtree
    node* leftmeVeje = mirrorTree(root->right);

    //3.Attach the left mirrored Subtree to right of root node and right mirrored subtree to left of root node
    root->left = leftmeVeje;
    root->right = rightMeveje;
    return root;
}
int main()
{
    node *root = buildTree();
    root = mirrorTree(root);
    cout << endl;
    printPreOrder(root);
}