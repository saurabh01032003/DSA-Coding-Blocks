#include <iostream>
#include <vector>
#include <queue>
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
void printPreOrder(node *root)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // Recursive Case
    cout << root->data << " ";

    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printLevelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* front = q.front();
        q.pop();

        if(front == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else{
            cout << front->data << " ";
            if(front->left != NULL)
            {
                q.push(front->left);
            }
            if(front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}
node *buildTreePreIn(vector<int> &preorder, vector<int> &inorder, int s, int e, int &i)
{
    // Base Case
    if (s > e)
    {
        // inOrder traversal is empty->therefore corrosponding tree is empty
        return NULL;
    }

    // Recursive Case
    int X = preorder[i];
    i++;
    node *root = new node(X);
    int k = s;
    while (inorder[k] != X)
    {
        k++;
    }
    // 1. Ask your friend to build leftSubtree using inOrder[s...k-1];
    root->left = buildTreePreIn(preorder, inorder, s, k - 1, i);

    // 2.Ask your friend to build rightSubtree using inOrder[k...e]
    root->right = buildTreePreIn(preorder, inorder, k + 1, e, i);
    return root;
}
int main()
{
    vector<int> preorder = {10, 20, 40, 50, 70, 30, 60};
    vector<int> inorder = {40, 20, 70, 50, 10, 30, 60};
    int s = 0;
    int e = preorder.size() - 1;
    int i = 0;
    node *root = buildTreePreIn(preorder, inorder, s, e, i);
    printPreOrder(root); // To verify whether our build tree is same or not after building from in order and pre order
    cout << endl;
    printLevelOrder(root);
}