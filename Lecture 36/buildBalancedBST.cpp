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
node* buildBalancedBST(int* arr,int s, int e)
{
    // Base Case
    if(s > e)//Since s is increasing and e is decreasing in each recursive Calls
    {
        return NULL;
    }

    // Recursive Case
    int mid = s + (e-s)/2;
    node* root = new node(arr[mid]);

    // Construct the leftSubtreee using arr[s...mid-1] ->friend
    root->left = buildBalancedBST(arr,s,mid-1);

    // Construct the rightSubtree using arr[mid+1...e] ->friend
    root->right = buildBalancedBST(arr,mid+1,e);
    return root;
}
void printLevelWiseLevelOrder(node* root)
{
    queue<node*> q;
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
int main()
{
    int arr[] = {3,5, 7, 10, 13, 15, 17};
    int n = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = n-1;
    node* root = buildBalancedBST(arr,s,e);
    printLevelWiseLevelOrder(root);
}