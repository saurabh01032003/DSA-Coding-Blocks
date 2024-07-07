#include <iostream>
#include <vector>
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
// void printPathSum(node *root, int target, vector<int> &path)
// {
//     // Base Case
//     if (root == NULL)
//     {
//         // You haven't found path
//         return;
//     }
//     if (root->left == NULL and root->right == NULL)
//     {
//         // You have reached leaf node
//         if (root->data == target)
//         {
//             path.push_back(root->data);
//             // print path
//             for (int val : path)
//             {
//                 cout << val << " ";
//             }
//             cout << endl;
//             path.pop_back();
//         }
//         return;
//     }

//     // Recursive Case
//     // 1.Include root node as you want path from root to leaf (so root node must be included)
//     path.push_back(root->data);

//     // 2.Now ,find all paths in LeftSubtee that sums upto "target-root->val" ->friend
//     printPathSum(root->left, target - root->data, path);

//     // 2.find all paths in RightSubtree that Sums upto "target-root->val" ->friend
//     printPathSum(root->right, target - root->data, path);

//     // 4.pop_back as you have generated all paths with root node that sums to "target-root->data"
//     path.pop_back();
// }

void pathSum(node *root, int target, vector<int> &path, vector<vector<int>> &paths)
{
    // Base Case
    if (root == NULL)
    {
        // You haven't found path
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        // You have reached leaf node
        if (root->data == target)
        {
            path.push_back(root->data);
            // print path
            paths.push_back(path);
            path.pop_back();
        }
        return;
    }

    // Recursive Case
    // 1.Include root node as you want path from root to leaf (so root node must be included)
    path.push_back(root->data);

    // 2.Now ,find all paths in LeftSubtee that sums upto "target-root->val" ->friend
    pathSum(root->left, target - root->data, path,paths);

    // 2.find all paths in RightSubtree that Sums upto "target-root->val" ->friend
    pathSum(root->right, target - root->data, path,paths);

    // 4.pop_back as you have generated all paths with root node that sums to "target-root->data"
    path.pop_back();
}
int main()
{
    node *root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(11);
    root->left->left->left = new node(7);
    root->left->left->right = new node(2);
    root->right->left = new node(13);
    root->right->right = new node(4);
    root->right->right->left = new node(5);
    root->right->right->right = new node(1);
    vector<int> path;
    vector<vector<int>> paths;
    int target = 22;
    pathSum(root,target,path,paths);
    for(vector<int> v : paths)
    {
        for(int val : v)
        {
            cout << val <<" ";
        }
        cout << endl;
    }
    // printPathSum(root, target, path);
}