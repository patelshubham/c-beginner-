
//Two trees are identical when they have same data and arrangement of data is also same.


#include <iostream>

//tree 
class node
{
    public:
    int data;
    node* left;
    node* right;
};

//new node 
node* newnode (int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right =NULL;

    return (Node); 
}


//identify if it's identical 
int identicaltrees(node* var1 , node* var2)

{

    if ( var1==NULL && var2==NULL)
    return 1;

    if( var1!=NULL && var2!=NULL)

    {
        return
        (
            var1->data == var2->data &&
            identicaltrees (var1->left, var2->left)&&
            identicaltrees(var1->right , var2->right)
        );
        
    }

return 0;

}



int main()
{
  node * root1 = newnode (1);
  node* root2= newnode(1);
  root1->left =newnode(2);
  root1->right=newnode(3);
  root2->left =newnode(2);
  root2->right=newnode(3);

  if(identicaltrees (root1,root2))
  std::cout<<"yeah";

  else

  std::cout<<"neah";






}