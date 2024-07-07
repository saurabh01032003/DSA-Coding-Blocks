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
bool heightBalanced(node* root)
{
    // Base Case
    if(root == NULL)
    {
        return true;
    }

    // Recursive Case

    // 1.Check For root Node(whether it is HeightBalanced or not)
    bool rootBalanced;
    if(abs(heightOfBT(root->left) - heightOfBT(root->right)) <=1)
    {
        rootBalanced = true;
    }else {
        rootBalanced = false;
    }
    // 2.Check for LeftSubtree whether it is Height-Balanced or not ->Recursion
    bool X = heightBalanced(root->left);

    // 3.Check for RightSubtree whether it is Height-Balanced or not ->Recursion
    bool Y = heightBalanced(root->right);

    return  X and Y and rootBalanced;
}
int main()
{
    node* root = buildTree();
    heightBalanced(root) ? cout << "Binary Tree is Height-Balanced" << endl : cout << "Binary Tree is not Height-Balanced" << endl;
}