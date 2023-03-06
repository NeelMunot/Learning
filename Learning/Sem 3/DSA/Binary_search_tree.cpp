#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left_dir;
    node *right_dir;
};

class Binary_search_tree
{
public:
    node *temp;
    node *root;
    Binary_search_tree()
    {
        root = nullptr;
    } 
    void create();
    void preorder(node *root);
    void postorder(node *root);
    void inorder(node *root);
};
void Binary_search_tree :: create()
{
    temp = new node;
    cout<<"Enter Data of new node : ";
    cin>>temp->data;
    temp->left_dir = nullptr;
    temp->right_dir = nullptr;
    if (root == nullptr)
    {
        root = temp;
    }
    else if (temp->data < root->data)
    {
        root->left_dir = temp;
    }
    else if (temp->data > root->data)
    {
        root->right_dir = temp;
    }
}

void Binary_search_tree :: preorder(node *root)
{
        cout<<root->data;
        preorder(root->left_dir);
        preorder(root->right_dir);
}

void Binary_search_tree :: postorder(node *root)
{
        postorder(root->left_dir);
        postorder(root->right_dir);
        cout<<root->data;
}

void Binary_search_tree :: inorder(node *root)
{
        inorder(root->left_dir);
        cout<<root->data;
        inorder(root->right_dir);
}