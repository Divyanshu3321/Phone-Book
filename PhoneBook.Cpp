#include<iostream>
#include<stdlib.h>
#include<string >
using namespace std;
struct node  
{
 string name , number;
 node *next;
};
node *head = NULL, *newnode , *temp;
void C_node  ()
{
    newnode = new node;
    cout<<"Enter name";
    cin>>newnode->name;
    cout<<"Enter number";
    cin>>newnode-> number;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = temp = newnode;

    }
    else
    {
        temp->next= newnode;
        temp = newnode;
    }
}
void display ()
{
    int len = 0;
    if (head == NULL)
    {
        cout<<"Contact list is empty"<<endl;
    }
    else
    {
        node*trav = head;
        while (temp != NULL)
        {
            cout<<trav->name<<endl;
            cout<<trav->number<<endl;
            trav = trav->next;
            len++;
        }
        cout<<"Total contacts in the list = "<<len<< endl;
    }
}
void search_contact ()
{
    node *search_node = head;
    string srch;
    int count = 0;
    cout<<"Enter your desired contact you want to search";
    cin>>srch;
    bool found = true;
    if (head == NULL)
    {
        cout<<"\nList is Empty"<<endl;
    }
    else
    {
        while(search_node != NULL)
        {
            if(srch == search_node->name  || srch == search_node->number)
            {
                 cout<<"Name: "<<search_node->name<<endl;
                cout<<"Phone NUmber"<<search_node->number<<endl;
                found = true;
            }
            search_node = search_node->next;
            count++;
        }
    }
    if(found==true)
    {
       
        cout<<"Index of the contact = "<< count <<endl;
    }
    else 
    {
        cout<<"Desired contact not found"<<endl;
    }
}
void menu ()
{
    cout<<"Enter 1 to add contact"<<endl;
    cout<<"Enter 2 to displacy all contact"<<endl;
    cout<<"Enter 3 to search contact"<<endl;
}
int main()
{
    int op;
    while (true)
    {
        menu();
        cin>>op;
        switch(op)
        {
            case 1 :
            C_node();
            break;
            case 2:
            display();
            break;
            case 3:
            search_contact();
            break;
            default:
            cout<<"Invalid Option"<<endl;
        }
    }
}