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

int heightOfBT(node *root)
{
    // Base Case
    if (root == NULL)
    {
        // Height of empty Tree is -1
        return -1;
    }

    // Recursive Case
    // 1.Compute height of LeftSubtree ->Recursively
    int X = heightOfBT(root->left);

    // 2.Compute height of RightSubtree -> Recursively
    int Y = heightOfBT(root->right);
    return 1 + max(X, Y);
}

int main()
{
    node *root = buildTree();
    cout << "Height of Binary Tree is : " << heightOfBT(root) << endl;
}