#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
bool hasPathSum(node* root,int target)
{
    // Base Case
    if(root == NULL)
    {
        // You haven't found path
        return false;
    }
    if(root->left == NULL and root->right == NULL)
    {
        // You have reached leaf node
        if(root->data == target)
        {
            return true;
        }
        return false;
    }

    // Recursive Case
    // 1.Check if there exist a path in LeftSubtee that sums upto "target-root->val" ->friend
    bool X = hasPathSum(root->left,target-root->data);

    // 2.Check if there exist a path in RightSubtree that Sums upto "target-root->val" ->friend
    bool Y = hasPathSum(root->right,target-root->data);

    return X or Y;
}
int main()
{
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(11);
    root->left->left->left = new node(7);
    // root->left->left->right = new node(2);
    root->right->left = new node(13);
    root->right->right = new node(4);
    // root->right->right->left = new node(5);
    root->right->right->right = new node(1);

    int target = 22;
    hasPathSum(root,target) ? cout << "Tree has path that Sums up to target!" << endl : cout << "Tree don't has path that Sums up to target!" << endl;
}