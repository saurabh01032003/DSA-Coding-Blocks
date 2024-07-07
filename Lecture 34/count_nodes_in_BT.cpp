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
int countNode(node *root)
{
    if (root == NULL)
    {
        return 0; // no node in empty tree i.e 0
    }

    //1.Calculate number of nodes in Left Subtree  
    int x = countNode(root->left);

    // 2.Calculate number of nodes in right Subtree
    int y = countNode(root->right);

    return x + y + 1;// Total nodes = number of nodes in left Subtree + number of nodes in right subtree + 1(i.e for root node)
}
int main()
{
    node *root = buildTree();
    cout <<"Number of Nodes : " << countNode(root) << endl;
}