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
int computeHeight(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return -1;
    }

    // Recursive Case
    return max(computeHeight(root->left), computeHeight(root->right)) + 1;
}
int computeDiameter(node *root)
{
    // Base Case
    if (root == NULL)
    {
        // Diameter of empty tree is 0
        return 0;
    }

    // Recursive Case
    // 1.Compute Diameter of LST ->friend
    int dL = computeDiameter(root->left);

    // 2.Compute Diameter of RST ->friend
    int dR = computeDiameter(root->right);

    // 3.Compute the length of Longest path between any two nodes that goes through root node
    int Z = computeHeight(root->left) + computeHeight(root->right) + 2;
    return max(dL, max(dL, Z));
}

// #########################################################################################################################################################################
// Compute Diameter Optimised ->Time Complexity == O(n)
class Pair
{
public:
    int diameter;
    int height;
};
Pair computeDiameterEfficient(node *root)
{
    Pair p;
    // Base Case
    if (root == NULL)
    {
        p.height = -1;
        p.diameter = 0;
        return p;
    }

    // Recursive Case
    // 1.Compute diameter of LST simultaneously compute height of LST->friend
    Pair pL = computeDiameterEfficient(root->left);

    // 2.Compute diameter of RST simultaneously compute height of RST->friend
    Pair pR = computeDiameterEfficient(root->right);

    // 3. Compute Length of Longest path b/w any two node that goes through root node
    int Z = pL.height + pR.height + 2;

    p.diameter = max(pL.diameter, max(pR.diameter, Z));
    p.height = max(pL.height, pR.height) + 1;
    return p;
}
int main()
{
    node *root = buildTree();
    cout << "Diameter of Binary Tree is : " << computeDiameter(root) << endl;
    cout << "Diameter is : " << computeDiameterEfficient(root).diameter << endl;
}