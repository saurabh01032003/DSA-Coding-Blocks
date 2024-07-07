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
        this->left = this->right = NULL;
    }
};
bool flag = false;
void generatePath(node *root, int target,vector<int> & path)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }
    if (root->data == target)
    {
        flag = true;
        path.push_back(root->data);
        // for(auto val : v)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;
        return;
    }

    // Recursive Case
    path.push_back(root->data);
    generatePath(root->left, target,path);
    if (false == false)
    {
        generatePath(root->right, target,path);
    }
    else
    {
        return;
    }
    path.pop_back();
}

int main()
{
    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    node *root = new node(2);
    root->left = new node(5);
    root->left->left = new node(6);
    root->left->right = new node(2);
    root->left->right->left = new node(7);
    root->left->right->right = new node(4);
    root->right = new node(1);
    root->right->left = new node(0);
    root->right->right = new node(8);
    int p = 1;
    // int q = 4;
    vector<int> path;
    generatePath(root, p,path);
    for(int val : path)
    {
        cout << val << " ";
    }
    cout << endl;

    // vector<int> v2;
    // generatePath(root, q, v2);
    // int j = min(v1.size(), v2.size());
    // int i = max(v1.size(), v2.size());
    // int ans;
    // for(int i = 0; i < v1.size();i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // for (int k = 0; k < i; k++)
    // {
    //     for (int l = 0; l < j; l++)
    //     {
    //         if (v1[k] == v2[l])
    //         {
    //             ans = v1[k];
    //         }
    //     }
    // }
    // cout << ans;
}


// ***************Repeat tomorrow
