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
    void count_no_nodes();
    void min_data();
    void max_data();
    void search_node(node *root, int search);
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

void Binary_search_tree :: count_no_nodes()
{
    cout<<"\nNumber of nodes in given Binary Search Tree are : "<<count_nodes<<endl;
}

void Binary_search_tree :: min_data()
{
    while (root->left_dir != nullptr)
    {
        root = root->left_dir;
    }
    cout<<"The minimun value in the BST is "<<root->data<<endl;
    
}

void Binary_search_tree :: max_data()
{
    while (root->right_dir != nullptr)
    {
        root = root->right_dir;
    }
    cout<<"The maximum value in the BST is "<<root->data<<endl;
    
}
void Binary_search_tree :: search_node(node *n1, int search )
{ 
    int flag=0;
    cout<<search;
    if(n1!=NULL)
    {
        if (n1->data > search)
        {
           // n1 = n1->left_dir;
            search_node(n1->left_dir,search);
        }
        else if (n1->data < search)
        {
            //n1 = n1->right_dir;
            search_node(n1->right_dir,search);
        }
        else if (n1->data == search)
        {
            cout<<"Node "<<search<<" is present in tree."<<endl;
            return;
            //flag=1;
            //break;
        }    
    }
    // if(flag==1)
    // {
    //     cout<<"Node "<<search<<" is present in tree."<<endl;
    //     return;
    // }

    else
    {
        cout<<"Node not found."<<endl;
    }
}
int main()
{
    int n;
    cout<<"Binary Search Tree : "<<endl;
    Binary_search_tree t1;
    t1.create();
    t1.preorder(t1.root);
    t1.count_no_nodes();
    t1.min_data();
    cout<<"Enter node to be searched : ";
    cin>>n;
    t1.search_node(t1.root, n);
}