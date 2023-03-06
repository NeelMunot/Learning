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
    int count_nodes;
    node *temp;
    node *root;
    Binary_search_tree()
    {
        root = nullptr;
        count_nodes = 0;
    } 
    void create();
    void preorder(node *root);
    void postorder(node *root);
    void inorder(node *root);
    void insert_node(node *root, node *temp);
    void no_nodes();
    void min_data();
    void max_data();
};
void Binary_search_tree :: create()
{
    char choice;
    do
    {
        temp = new node;
        count_nodes ++;
        cout<<"Enter Data of new node : ";
        cin>>temp->data;
        temp->left_dir = nullptr;
        temp->right_dir = nullptr;
        if (root == nullptr)
        {
            root = temp;
        }
        // else if (temp->data < root->data)
        // {
        //     root->left_dir = temp;
        // }
        // else if (temp->data > root->data)
        // {
        //     root->right_dir = temp;
        // }
        else
        {
            insert_node(root, temp);
        }
        cout<<"Do you want to add nodes ? "<<endl;
        cout<<"Enter choice (y/n) : ";
        cin>>choice;
    } while (choice == 'y');
}

void Binary_search_tree :: preorder(node *root)
{
    if(root!=NULL)
    {
    
        cout<<root->data<< " ";
        preorder(root->left_dir);
        preorder(root->right_dir);  
    }
}

void Binary_search_tree :: postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left_dir);
        postorder(root->right_dir);
        cout<<root->data<< " ";                 
    }
}

void Binary_search_tree :: inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left_dir);
        cout<<root->data<< " ";
        inorder(root->right_dir);                 
    }
}

void Binary_search_tree ::insert_node(node *root, node *temp)
{
    if (temp->data < root->data)
    {
        if (root->left_dir == nullptr)
        {
            root->left_dir = temp;
        }
        else
        {
            insert_node(root->left_dir, temp);
        }
    }
    else if (temp->data > root->data)
    {
        if (root->right_dir == nullptr)
        {
            root->right_dir = temp;
        }
        else
        {
            insert_node(root->right_dir,temp);
        }
        
    }
    
}

void Binary_search_tree :: no_nodes()
{
    cout<<"\nNumber of nodes in given Binary Search Tree are : "<<count_nodes<<endl;
}

int main()
{
    cout<<"Binary Search Tree : "<<endl;
    Binary_search_tree t1;
    t1.create();
    t1.preorder(t1.root);
    t1.no_nodes();

}