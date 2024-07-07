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
        this->left = this->right = NULL;
    }
};
int countPaths(node *root, int target)
{
    // Base Case
    if (root == NULL)
    {
        // You haven't got any path
        return 0;
    }

    // Recursive Case
    // 1.Count number of paths in LST that starts at root and sum upto "target-root->data"
    int X = countPaths(root->left, target - root->data);

    // 1.Count number of paths in RST that starts at root and sum upto "target-root->data"
    int Y = countPaths(root->right, target - root->data);
    if (root->data == target)
    {
        return 1 + X + Y;
    }
    return X + Y;
}
int main()
{
    node *root = new node(2);
    root->left = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(3);
    root->left->left->left = new node(1);
    root->left->left->right = new node(8);
    root->right = new node(6);
    root->right->left = new node(4);
    root->right->right = new node(5);

    int target = 12;
    cout << countPaths(root, target);
}