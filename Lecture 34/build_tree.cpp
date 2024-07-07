// Build tree from pre order traversal
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
void printPreOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        cout << -1 << ' ';
        return;
    }

    // Recursive Case
    cout << root->data << " ";

    printPreOrder(root->left);

    printPreOrder(root->right);
}
node *buildTree() // this function returns the root node of tree build
{

    int data;
    cin >> data; // To take input as pre order traversal of tree

    if(data == -1) // when data == -1 you are not require to build tree(i.e build empty tree)
    {
        return NULL;// empty tree do not have node , So' its root node is NULL
    }
    // Since you have read first value so you make it root node
    node *root = new node(data);
   

    // 2.Build the left Subtree from its pre order traversal
    root->left = buildTree();

    // 3.Build the right Subtree from its pre order traversal
    root->right = buildTree();

    return root;
}
int main()
{
    node *root = NULL;
    root = buildTree();

    printPreOrder(root);
}