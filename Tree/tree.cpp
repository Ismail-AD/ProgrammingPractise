#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
void Inorder(TreeNode *newOne)
{
    if (newOne != nullptr)
    {
        Inorder(newOne->left);
        cout << newOne->data << " ";
        Inorder(newOne->right);
    }
}

void Preorder(TreeNode *newOne)
{
    if (newOne != nullptr)
    {
        cout << newOne->data << " ";
        Inorder(newOne->left);
        Inorder(newOne->right);
    }
}

void Postorder(TreeNode *newOne)
{
    if (newOne != nullptr)
    {
        Inorder(newOne->left);
        Inorder(newOne->right);
        cout << newOne->data << " ";
    }
}

int main()
{
    TreeNode *newOne = new TreeNode(1);
    newOne->left = new TreeNode(2);
    newOne->right = new TreeNode(3);
    cout<<"Inorder left root right: "<<endl;
    Inorder(newOne);
    cout<<"\nPreorder root left right: "<<endl;
    Preorder(newOne);
    cout<<"\nPostorder left right root : "<<endl;
    Postorder(newOne);
    return 0;
}