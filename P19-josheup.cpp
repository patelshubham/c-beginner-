#include<iostream>


struct node 
{
    int data;
    node* next;
};


node* newnode (int data)
{

    node* nwnode= new node;
    nwnode->next = nwnode;
    nwnode->data =data;
}



void findlast(node* )