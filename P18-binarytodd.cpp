#include <iostream>

struct node
{
    int data;
    node* left;
    node* right;
};


void BTtoDLL ( node *root ,node** head  )

{
    if(root == NULL)
    return;

    static node* previous = NULL;

    BTtoDLL (root->left, head);

   if(previous == NULL)
    *head = root;

    else
    {
        root->left = previous;
        previous->right = root;

    }


previous = root;

 BTtoDLL (root->right, head);


}

node*  newnode(int data)
{

    node* newnode = new node();
    newnode->data = data;
    newnode->left= newnode->right = NULL;
    return(newnode);

}


void printlist ( node* node)

{
    while (node!=NULL)
   {
    std::cout<<node->data <<std::endl;

   node= node->right;

   }

}


int main()
{
    node* root = newnode(10);
    root->left = newnode(12);
    root->right = newnode(20);
    root->left->left = newnode(25);
    root->left->right= newnode(30);
    root->right->left = newnode(36);

    node* head = NULL;
    BTtoDLL(root, &head);

    printlist(head);

}