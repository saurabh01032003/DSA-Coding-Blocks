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
string tree2str(node *root) // Pre-Order traversal with valid parantheses
{
    // Base Case
    if(root == NULL)
    {
        return "";
    }

    // Recursive Case
    string leftString = tree2str(root->left);

    string rightString = tree2str(root->right);

    if (leftString != "" and rightString != "")
    {
        return to_string(root->data) + "(" + leftString + ")(" + rightString + ")";
    }else{
        if(leftString != "" and rightString == "")
        {
            return to_string(root->data) + "(" + leftString + ")";
        }else if(leftString == "" and rightString != "")
        {
            return to_string(root->data) + "()(" + rightString + ")";
        }else if(leftString == "" and rightString == "")
        {
            return to_string(root->data);
        }
    }
}
int main()
{
    node* root = buildTree();
    cout << tree2str(root) << endl;
}