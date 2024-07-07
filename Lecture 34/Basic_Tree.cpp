#include <iostream>
using namespace std;

// Class of tree
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
void printPreOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        cout << -1 << " ";
        return;
    }

    // Recursive Case

    // 1.Process the root node
    cout << root->data << " ";

    // 2.Do the preOrder traversal of LeftSubtree
    printPreOrder(root->left);

    // 3.Do the preOrder traversal of RightSubtree
    printPreOrder(root->right);
}

void printInOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        cout << -1 << " ";
        return;
    }

    // Recursive Case

    // 1.Do the InOrder traversal of LeftSubtree
    printInOrder(root->left);

    // 2.Process the root node
    cout << root->data << " ";

    // 3.Do the InOrder traversal of RightSubtree
    printInOrder(root->right);
}

void printPostOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        cout << -1 << " ";
        return;
    }

    // Recursive Case

    // 1.Do the PostOrder traversal of LeftSubtree
    printPostOrder(root->left);

    // 2.Do the PostOrder traversal of RightSubtree
    printPostOrder(root->right);

    // 3.Process the root node
    cout << root->data << " ";
}
int main()
{
    node *root = NULL;
    root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->right->right = new node(60);

    printPreOrder(root);
    cout << endl;
    printInOrder(root);
    cout << endl;
    printPostOrder(root);
}