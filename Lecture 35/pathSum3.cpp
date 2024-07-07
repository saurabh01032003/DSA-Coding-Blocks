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
        this->left = this->right = NULL;
    }
};
int countPath(node* root,long long int target)
{
    // Base Case
    if(root == NULL)
    {
        // You haven't got any path
        return 0;
    }

    // Recursive Case
    int X = countPath(root->left,target-root->data);
    int Y = countPath(root->right,target-root->data);
    if(root->data == target)
    {
        return X+Y+1;
    }
    return X+Y;
}
int pathSum(node* root,int target)
{
    // Base Case
    if(root == NULL)
    {
        return 0;
    }

    // Recursive Case
    // 1.Count number of paths in LST that sum upto target -> Recursively
    int leftCount = pathSum(root->left,target);

    // 2.Count number of paths in RST that sum upto target ->Recursively
    int rightCount = pathSum(root->right,target);

    // 3.Count the number of paths starting at the root node that sums up to target
    int Z = countPath(root,target);

    return leftCount+rightCount+Z;
}
int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(2);
    root->left->right->right = new node(1);
    root->left->left->left = new node(3);
    root->left->left->right = new node(-2);
    root->right = new node(-3);
    root->right->right = new node(11);

    int target = 8;
    cout << pathSum(root,target) << endl;

}