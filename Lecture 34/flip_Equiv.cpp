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
bool flipEquiv(node *root1, node *root2)
{
    // Base Case
    if (root1 == NULL and root2 == NULL)
    {
        // Both tree are empty, Empty tree are flipped Equivalent
        return true;
    }
    if (root1 == NULL or root2 == NULL)
    {
        // One tree is empty and other is non-empty ,So not flipped Equivalent
        return false;
    }
    if (root1->data != root2->data)
    {
        // Never flipped Equivalent
        return false;
    }

    // Recursive Case
    // if first Left and Right child of root node are not flipped
    if (flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right))
    {
        // Left Subtree of Tree1(root1) is flipped Equivalent to LST of tree2(root2)
        // Right Subtree of Tree1(root1) is flipped Equivalent to RST of tree2(root2)
        return true;
    }
    else if (flipEquiv(root1->left, root2->right) and flipEquiv(root1->right, root2->left)) // if first Left and Right child of root node are flipped
    {
        // Left Subtree of Tree1(root1) is flipped Equivalent to RST of tree2(root2)
        // Right Subtree of Tree1(root1) is flipped Equivalent to LST of tree2(root2)
        return true;
    }
    return false; // otherwise not a flipped Equivalent
}
int main()
{
    node *root1 = buildTree();
    node *root2 = buildTree();
    flipEquiv(root1, root2) ? cout << "Both tree are flip Equivalent" << endl : cout << "Trees are not flip Equivalent" << endl;
}