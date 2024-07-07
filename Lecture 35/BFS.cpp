// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int data)
//     {
//         this->data = data;
//         this->left = this->right = NULL;
//     }
// };

// node *buildTree()
// {
//     int data;
//     cin >> data;

//     if (data == -1)
//     {
//         return NULL;
//     }
//     node *root = new node(data);
//     root->left = buildTree();
//     root->right = buildTree();
//     return root;
// }
// void printLevelOrder(node *root)
// {
//     queue<node *> q; // To keep track of nodes which have been visited/seen but not processed
//     q.push(root);

//     while (!q.empty()) // till queue is non-empty
//     {
//         node* front = q.front();
//         q.pop();

//         // Process the front Node
//         // 1.Print value of front node
//         cout << front->data << " ";

//         // 2.Visit its child node
//         if(front->left != NULL)
//         {
//             q.push(front->left);
//         }

//         if(front->right != NULL)
//         {
//             q.push(front->right);
//         }
//     }
// }

// int main()
// {
//     node *root = buildTree();
//     printLevelOrder(root);
//     return 0;
// }

// ####################################################################################
#include <iostream>
#include <queue>
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
node* buildTree()
{
    int data;
    cin >> data;

    if(data == -1)
    {
        return NULL;
    }
    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
// void printLevelOrder(node* root)
// {
//     queue<node*> q;
//     q.push(root);

//     while(!q.empty())
//     {
//         node* front = q.front();
//         q.pop();

//         // Process the front node(i.e Print and than visit child)
//         cout << front->data << " ";
//         if(front->left != NULL)
//         {
//             q.push(front->left);
//         }
//         if(front->right != NULL)
//         {
//             q.push(front->right);
//         }
//     }
// }
void printLevelOrder(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* front = q.front();
        q.pop();

        // Process the front Node
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
int main()
{
    node* root = buildTree();
    printLevelOrder(root);

}