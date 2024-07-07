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
node *buildTree()
{
    queue<node *> q;//to keep track of nodes which have been constructed but whose child nodes are yet to be build 

    int rootData;
    // Read the first val(it must be root node)
    cin >> rootData;

    node *root = new node(rootData);
    q.push(root);

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();

        // Next two input data are(i.e leftData and rightData) are leftChild and rightChilds of front node
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            node *leftChild = new node(leftData);
            front->left = leftChild; // leftChild is created
            q.push(leftChild);       // push leftChild in queue (as you have to find its child node as well)
        }
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            node *rightChild = new node(rightData);
            front->right = rightChild; // rightChild of given node is created
            q.push(rightChild);        // push rightChild in queue (as you have to find its child node as well)
        }
    }
    return root;
}
void printLevelWiseBFS(node *root)
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

int main()
{
    node *root = buildTree();
    printLevelWiseBFS(root);
} 