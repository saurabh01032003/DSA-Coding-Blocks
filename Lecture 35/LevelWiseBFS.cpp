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
void printLevelWiseBFS(node *root)
{
    queue<node *> q;//to keep track of nodes which have been visited but not yet processed
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *front = q.front();
        q.pop();// pop the front node

        if (front != NULL)
        {

            // Process the front
            // 1. print the front node
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
        else
        { // front == NULL
            cout << endl;
            if (!q.empty())//After pop of last null queue becomes empty so don't push NULL now
            {
                q.push(NULL);
            }
        }
    }
}
// void printLevelWiseBFS(node* root)
// {
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty())
//     {
//         node* front = q.front();
//         q.pop();
//         if(front == NULL)
//         {
//             cout << endl;
//             if(!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }else{//front != NULL
//             cout << front->data << " ";

//             if(front->left != NULL)
//             {
//                 q.push(front->left);
//             }
//             if(front->right != NULL)
//             {
//                 q.push(front->right);
//             }

//         }
//     }

// }
int main()
{
    node* root = buildTree();
    printLevelWiseBFS(root);

}