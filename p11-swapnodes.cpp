//given a binary treee and inter value k , the task is to swap sibling nodes of every k'th level where k>= 1;

#include <iostream>


//tree node
struct node 
{
    int data;
    struct node *left, *right ;


};

node* newnode(int data)
{
    node*  Node = new node;
    Node ->data = data;
    Node ->left= NULL;
    Node ->right = NULL;
    return Node;
}

void swap( node** var1, node** var2)
{
    node* Node =*var1;
    *var1= *var2;
    *var2= Node;
}

// function to swap left-right node of tree

void swapeveryklevelutil(node* root, int level , int k)

{

    //base condition
    if(root ==NULL || (root->left ==NULL && root->right ==NULL))
    return;


//current level+1 is present in swap then swap left and right node 
    if((level+1) % k==0)
    swap(&root->left, &root->right);

    swapeveryklevelutil(root->left , level+1, k);
    swapeveryklevelutil(root->right , level+1, k);
}

void swapeveryKlevel(node *root , int k)
{
     swapeveryklevelutil(root , 1, k);
}

void inorder (node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    std::cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right= newnode(3);
    root->left->left = newnode(4);
    root->right->right= newnode(8);
    root->right->left = newnode(7);

    int k=2;
    std::cout<<"before swap node:"<<std::endl;
    inorder(root);

    swapeveryKlevel(root, k);

        std::cout<<"before swap after k node:"<<std::endl;
        inorder(root);
     
}
