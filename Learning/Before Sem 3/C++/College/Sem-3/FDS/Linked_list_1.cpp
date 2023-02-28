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
    node *head , *temp , *temp1;
    int i;
public:
    SLL();
    void create();
    void display();
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
    temp1  = head ;
    while (temp1 != NULL) 
    {
        cout<<temp1->data<<"  ";
        temp1 = temp1->next_add;
    }
}

int main()
{
    SLL l1;
    l1.create();
    l1.display();

    return 0;
}