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

    // Recursive Case
    node *root = new node(data);

    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int computeSum(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return 0;//Sum of empty tree is 0
    }

    // Recursive Case
    // 1.Compute Sum of Left Subtree
    int x = computeSum(root->left);

    // 2.Compute Sum of Right Subtree
    int y = computeSum(root->right);

    return x + y + root->data; 
}
int main()
{
    node *root = buildTree();
    cout << "Sum of Nodes is : " << computeSum(root) << endl;
}