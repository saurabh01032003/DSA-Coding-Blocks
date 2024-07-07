#include <iostream>
#include <climits>
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

// // ################################################################################################################################################################################
// // int Maximum(node *root)
// // {
// //     if (root == NULL)
// //     {
// //         return INT_MIN;
// //     }

// //     while (root->right != NULL)
// //     {
// //         root = root->right;
// //     }
// //     return root->data;
// // }

// // int Minimum(node *root)
// // {
// //     if (root == NULL)
// //     {
// //         return INT_MAX;
// //     }

// //     while (root->left != NULL)
// //     {
// //         root = root->left;
// //     }
// //     return root->data;
// // }
// // bool checkBST(node *root)
// // {
// //     // Base Case
// //     if (root == NULL)
// //     {
// //         return true;
// //     }

// //     // Recursive Case
// //     // 1.Check if leftSubtree is BST->friend
// //     bool X = checkBST(root->left);

// //     // 2.Check if rightSubtree is BST->friend
// //     bool Y = checkBST(root->right);

// //     // 3.Check whether BST property satisfies on root or not
// //     bool rootSatisfy;
// //     if (root->data > Maximum(root->left) and root->data < Minimum(root->right))
// //     {
// //         rootSatisfy = true;
// //     }
// //     else
// //     {
// //         rootSatisfy = false;
// //     }

// //     return X and Y and rootSatisfy;
// // }

// // #############################################################################################################################################################################
// class triple
// {
// public:
//     bool isBST;
//     int min;
//     int max;
// };
// triple checkBST(node *root)
// {
//     triple t;
//     // Base Case
//     if(root == NULL)
//     {
//         t.isBST = true;
//         t.max = INT_MIN;
//         t.min = INT_MAX;
//         return t;
//     }

//     // Recursive Case
//     // 1.Check if left Subtree is BST or not and Simultaneously compute maximum and minimum value in it -> friend
//     triple leftSubtree = checkBST(root->left);

//     // 2.Check if RightSubtree is BST or not and Simultaneously compute maximum and minimum value in it  -> friend
//     triple rightSubtree = checkBST(root->right);

//     // 3.Check if rootNode satisfy BST property or not 
//     bool checkRoot;
//     if (leftSubtree.max < root->data and rightSubtree.min > root->data)
//     {
//         checkRoot = true;
//     }
//     else
//     {
//         checkRoot = false;
//     }

//     t.isBST = checkRoot and leftSubtree.isBST and rightSubtree.isBST;
//     t.max = max(root->data, max(rightSubtree.max, leftSubtree.max));
//     t.min = min(root->data, min(rightSubtree.min, leftSubtree.min));
//     return t;
// }

// // #############################################################################################################################################################################
bool isValidBST(node* root,long long int lb, long long int ub)
{
    // Base Case
    if(root == NULL)
    {
        return true;
    }

    // Recursive Case
    // 1.Check if nodes in leftSubtree lies in valid range or not ->friend
    bool X = isValidBST(root->left,lb,root->data);

     // 2.Check if nodes in rightSubtree lies in valid range or not ->friend
    bool Y = isValidBST(root->right,root->data,ub);

    // Check for rootnode whether it is lie in valid range or not
    bool Z = root->data > lb && root->data < ub ? true : false;
    return X && Y && Z;
}



int main()
{

    node *root = new node(10);

    root->left = new node(5);
    root->left->left = new node(3);
    root->left->right = new node(7);

    root->right = new node(15);
    root->right->left = new node(14);
    root->right->right = new node(17);

    // checkBST(root)? cout << "is a BST" << endl : cout << "Not a BST" << endl;

    // checkBST(root).isBST ? cout << "is a BST" << endl : cout << "Not a BST" << endl;

    
        long long int ub = LLONG_MAX;
        long long int lb = LLONG_MIN;
        isValidBST(root,lb,ub) ? cout << "Is a BST" : cout << "Not a BST" << endl;
        

    
}