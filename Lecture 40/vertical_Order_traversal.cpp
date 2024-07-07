#include <iostream>
#include <map>
#include <vector>
using namespace std;
class node
{
public:
    char data;
    node *left;
    node *right;

    node(char data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
node *buildTree()
{
    char data;
    cin >> data;

    if (data == '#')
    {
        // node *root = NULL;
        return NULL;
    }
    node *root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void verticalOrder(node* root,map<int,vector<char>>& distMap,int i)
{
    // Base Case
    if(root == NULL)
    {
        return;
    }

    // Recursive Case
    // Insert the node at distance 'i' from root line
    distMap[i].push_back(root->data);//As we have done in phonebook implementation

    verticalOrder(root->left,distMap,i-1);//left me distance km hoga (i.e i-1)
    verticalOrder(root->right,distMap,i+1);//right me distance badhega by 1 (i.e i+1)


}
int main()
{
    node *root = NULL;
    root = buildTree();
    map<int,vector<char>> distMap;
    verticalOrder(root,distMap,0);
    for(auto p : distMap)
    {
        vector<char> v = p.second;
        cout << p.first << " : ";
        for(auto ch : v)
        {
            cout << ch << " ";
        }
        cout << endl;

    }
}
// A B D -1 -1 E -1 -1 C -1 F G -1 -1 -1(INPUT OF TREE i.e PREORDER OF TREE)