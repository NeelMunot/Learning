#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next_add;
};

class SLL
{
private:
    node *head , *temp , *temp1 , *tempd;
    int i;
public:
    SLL();
    void create();
    void display();
    void insert_beg();
    void inset_end();
    void insert_after();
};

SLL::SLL()
{
    head = NULL;
    i = 0;
}
void SLL ::create()
{
    char ch;
    do
    {
        temp = new node;
        i = i + 1 ;
        cout<<"Enter Data for "<<i<<"th node : ";
        cin>>temp->data;
        temp->next_add = NULL;
        if (head == NULL)
        {
            head = temp ;
        }
        else
        {
            temp1 = head;
            while (temp1->next_add != NULL)
            {
                temp1 = temp1->next_add; /// for traversing through the linked list
            }
            temp1->next_add = temp ; 
        }    //here temp is the newly created node and the traversed node is temp1
        cout<<"Do you want to add more nodes ? ";
        cin>>ch;
    } while (ch == 'y');   
}
void SLL ::display()
{
    temp  = head ;
    while (temp != NULL) 
    {
        cout<<temp->data<<"  ";
        temp = temp->next_add;
    }
}
void SLL :: insert_beg()
{
        temp = new node;
        i = i + 1 ;
        cout<<"Enter Data for node before head : ";
        cin>>temp->data;
        temp->next_add = NULL;
        temp->next_add = head;
        head = temp;
}
void SLL :: inset_end()
{
    temp = new node;
    cout<<"Enter Data after last node : ";
    cin>>temp->data;
    temp->next_add = NULL;
    temp1 = head;
    while (temp1->next_add != NULL)
    {
        temp1 = temp1->next_add; 
    }
    temp1->next_add = temp ; 
}
void SLL :: insert_after()
{
    int value;
    cout<<"After which value do you want to insert : ";
    cin>>value;
    temp = new node;
    cout<<"Enter data : ";
    cin>>temp->data;
    temp->next_add = NULL;
    temp1 = head;
    while (temp1->next_add != NULL)
    {
        if (temp1->data == value)
        {
            temp->next_add = temp1->next_add;
            temp1->next_add = temp;
            break;
        }
        temp1 = temp1->next_add;
    }
    
}

int main()
{
    SLL l1;
    l1.create();
    l1.insert_beg();
    l1.inset_end();
    l1.insert_after();
    l1.display();

    return 0;
}