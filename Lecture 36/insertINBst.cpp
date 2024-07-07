#include <iostream>
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
void printLevelWiseLevelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}
node* insert(node* root,int element)
{
    // Base Case
    if(root == NULL)
    {
        // Tree is empty(Now Ek bhi node bna diya toh woh BST ki property satisfy karega)
        root = new node(element);
        return root;
    }

    // Recursive Case
    if(element < root->data)
    {
        // Insert element in left Subtree->Smaller instance of same problem->friend
        node* rootFromLST = insert(root->left,element);
        root->left = rootFromLST;
    }else{
        // element > root->data
        // Insert element in Right Subtree ->Smaller instance of same problem->friend
        node* rootFromRST = insert(root->right,element);
        root->right = rootFromRST;
    }
    return root;
}
int main()
{
    node *root = NULL;
    root = insert(root,10);// Insert function after inserting element 10 returns the root node of updated BST
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,13);
    root = insert(root,17);
    root = insert(root,6);

    printLevelWiseLevelOrderTraversal(root);


}