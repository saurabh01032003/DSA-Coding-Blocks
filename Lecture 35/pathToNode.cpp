#include <iostream>
#include <vector>
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
vector<int> path;
bool flag = false;//Assume we have not found our required path
void generatePath(node* root,int target)
{
    // Base Case
    if(root == NULL)
    {
        // You haven't got path
        return;
    }
    if(root->data == target)
    {
        // You have found the target node
        flag = true;
        path.push_back(root->data);
        // Now print the path
        for(int node_val : path)
        {
            cout << node_val << " ";
        }
        cout << endl;
        // path.pop_back();
        // You will backtrack here also if you want multiple such paths and you must not maintain flag also but not required here
        return;
    }

    // Recursive Case
    // 1.if our root node is not our target Element than push it in our path vector
    path.push_back(root->data);

    // 2.Now go in left Subtree
    generatePath(root->left,target);

    // 3.Now check if we have found our path or not ,if not found than do right recursive call
    if(flag == false){
        generatePath(root->right,target);
    }else{
        return;
    }

    // 4.Back-tracking ->as you have not got path from given root (in either left or right of it) node so pop it
    path.pop_back(); // Galat path pe chale gaye ho pop_back krna jaruri hai

}
int main()
{
    node* root = new node(2);
    root->left = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(8);
    root->left->left->left = new node(1);
    root->left->left->right = new node(9);
    root->right = new node(6);
    root->right->left = new node(8);
    root->right->right = new node(5);

    int target = 8;
    generatePath(root,target);

}