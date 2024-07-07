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
// void printRightView(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *front = q.front();
//         q.pop();

//         if (front == NULL)//You have visited previous level
//         {
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             if (q.front() == NULL) // front node is the right most node of given level 
//             {
//                 cout << front->data << " ";
//             }
//             if (front->left != NULL)
//             {
//                 q.push(front->left);
//             }
//             if (front->right != NULL)
//             {
//                 q.push(front->right);
//             }
//         }
//     }
// }
int maxLevel = -1;//global variable because you want all changes to persist across all recursive call(you can pass it by refrence as well)
                // to store the info about the max level upto which we've printed
                //the rightmost  node 
void printRightViewRecursive(node* root,int curr_level)
{
    // Base Case
    if(root == NULL)
    {
        return;
    }

    // Recursive Case
    if(maxLevel < curr_level)
    {
        // root is the rightmost node of the given level
        cout << root->data << " ";
        maxLevel = curr_level;
    }
    // 1.First visit the right Subtree
    printRightViewRecursive(root->right,curr_level+1);

    // 2.Now visit the left Subtree
    printRightViewRecursive(root->left ,curr_level+1);

}
int main()
{
    node *root = NULL;
    root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->right->right = new node(60);
    // printRightView(root);
    printRightViewRecursive(root,0);
}