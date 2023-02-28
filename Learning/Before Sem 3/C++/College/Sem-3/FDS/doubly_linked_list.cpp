#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next_add;
    node *prev_add;
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
    SLL ones_complement();
    void one_complement();
    void create_single(int );
    // void insert_beg();
    void inset_end(int);
    // void insert_after();
    int converter_1(int );
};

SLL::SLL()
{
    head = NULL;
    i = 0;
}
void SLL ::create()
{
    char ch;
    cout<<"Enter binary number :"<<endl;
    do
    {
        temp = new node;
        i = i + 1 ;
        cout<<"Enter Data for "<<i<<"th node : ";
        cin>>temp->data;
        temp->next_add = NULL;
        temp->prev_add = NULL;
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
            temp->prev_add = temp1; 
        }    //here temp is the newly created node and the traversed node is temp1
        cout<<"Do you want to add more nodes ? ";
        cin>>ch;
    } while (ch == 'y');   
}
void SLL :: create_single(int a)
{
    temp = new node;
    temp->data = a;
    temp->next_add = NULL;
    temp->prev_add = NULL;
    head = temp;
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
// int SLL :: converter_1(int a)
// {
//     if (a == 1)
//     {
//         return 0;
//     }
//     else if (a == 0)
//     {
//         return 1;
//     }
    
// }
// SLL SLL :: ones_complement()
// {
//     temp1 = l1.head;
//     SLL l;
//     l.create_single(head->data);
//     cout<<head->data;
//     while (temp1 != NULL)
//     {
//         temp1 = temp1->next_add;
//         l.inset_end(temp1->data);
//     }
//     return l;
// }
// void SLL :: insert_beg()
// {
//        temp = new node;
//         // i = i + 1 ;
//         cout<<"Enter Data for node before head : ";
//         cin>>temp->data;
//         temp->next_add = NULL;
//         temp->prev_add = NULL;
//         temp->next_add = head;
//         head = temp;
// }
void SLL :: inset_end(int a)
{
    temp = new node;
    // cout<<"Enter Data after last node : ";
    // cin>>temp->data;
    temp->data = a;
    temp->next_add = NULL;
    temp->prev_add = NULL;
    temp1 = head;
    while (temp1->next_add != NULL)
    {
        temp1 = temp1->next_add; 
    }
    temp1->next_add = temp ;
    temp->prev_add = temp1; 
}
// void SLL :: insert_after()
// {    
//     int value;
//     cout<<"After which value do you want to insert : ";
//     cin>>value;
//     temp = new node;
//     cout<<"Enter data : ";
//     cin>>temp->data;
//     temp->next_add = NULL;
//     temp1 = head;
//     while (temp1->next_add != NULL)
//     {
//         if (temp1->data == value)
//         {
//             temp->next_add = temp1->next_add;
//             temp1->next_add = temp;
//             break;
//         }
//         temp1 = temp1->next_add;
//     }
    
// }
void SLL :: one_complement()
{
    temp1 = head;
    // if (head->data == 1)
    // {
    //     head->data = 0;
    // }
    // else if (head->data == 0)
    // {
    //     head->data = 1;
    // }
    
    while (temp1 != NULL)
    {
        if (temp1->data == 1)
        {
            temp1->data = 0;
        }
        else if (temp1->data == 0)
        {
            temp1->data = 1;
        }
        temp1 = temp1->next_add;
    }
    
}

int main()
{
    SLL l1,l2;
    l1.create();
    l1.display();
    l1.one_complement();
    // l1.insert_beg(); 
    // l1.inset_end();
    // l1.insert_after();
    // l1.display();
    // l2 = l1;
    l1.display();
    return 0;
}