#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left_dir;
    node *right_dir;
};

class Stack
{
    node *stck[10];
    int top =-1;
public:
    void push(node *t)
    {
        top++;
        stck[top] = t;
    }

    node *pop()
    {
        node *t;
        t = stck[top];
        top--;
        return t;
    }
};

class BST_without_recurssive
{
public:
    int count_nodes;
    node *temp;
    node *root;
    BST_without_recurssive()
    {
        root = nullptr;
        count_nodes = 0;
    } 
    void create();
    void preorder(node *root);
    // void postorder(node *root);
    // void inorder(node *root);
    // void insert_node(node *root, node *temp);
    // void count_no_nodes();
    // void min_data();
    // void max_data();
    // void search_node(node *root, int search);
};
// here root always gets replace so we need to take a new 
void BST_without_recurssive :: create()
{
    char choice;
    do
    {
        temp = new node;
        node *n_temp;
        n_temp = root;
        //count_nodes ++;
        cout<<"Enter Data of new node : ";
        cin>>temp->data;
        temp->left_dir = nullptr;
        temp->right_dir = nullptr;
        if (root == nullptr)
        {
            root = temp;
        }
        else
        {
            int flag = 0;
            while (flag != 1)
            {
                if (temp->data < n_temp->data)
                {
                    if(n_temp->left_dir == nullptr)
                    {
                        n_temp->left_dir = temp;
                        flag = 1;
                        break;
                    }
                    else
                    {
                        n_temp = n_temp->left_dir;
                    }
                }
                else if (temp->data > n_temp->data)
                {
                    if(n_temp->right_dir == nullptr)
                    {
                        n_temp->right_dir = temp;
                        flag = 1;
                        break;
                    }
                    else
                    {
                        n_temp = n_temp->right_dir;
                    }
                }
            }
        }
        // else
        // {
        //     insert_node(root, temp);
        // }
        cout<<"Do you want to add nodes ? "<<endl;
        cout<<"Enter choice (y/n) : ";
        cin>>choice;
    } while (choice == 'y');
}

void BST_without_recurssive :: preorder(node *root)
{
    // if(root!=NULL)
    // {
    //     cout<<root->data<< " ";
    //     preorder(root->left_dir);
    //     preorder(root->right_dir);  
    // }

    node *t = root;
    while (t!=nullptr)
    {
        /* code */
    }
    
}

int main()
{
    BST_without_recurssive b1;
    b1.create();
    b1.preorder(b1.root);
}