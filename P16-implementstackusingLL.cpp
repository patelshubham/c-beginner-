#include <iostream>


//LL node 
struct node 
{
    int data;
    struct node* link;
};

struct node* top;

void push (int data)
{
    //creating temp
    struct node* temp;
    temp= new node();

   
   if (!temp)
   {
       std::cout<<"\nheap overflow";
       exit (1);
   }
   
       
       temp->data= data;     //put data 

       temp->link = top;

       top=temp;
}



int isEmpty()
{
  return top==NULL;
}

int peek()

{
    if (!isEmpty())
    return top->data;
    else
    exit(1);

}
void pop()
{
   
   struct node* temp;

      if (top==NULL)
      {
          std::cout<<"\nstack underflow";
          exit(1);
      }
      else 
     {
      temp=top;

      top=top->link;

      temp->link= NULL;

      free(temp);
     }
}

void display ()

{
     
   struct node* temp;

      if (top==NULL)
      {
          std::cout<<"\nstack underflow";
          exit(1);
      }
      else
      temp=top;

      while (temp!=NULL)
      {
          std::cout << temp->data<<std::endl;
          temp= temp->link;
      }
}


int main()

{
    push (15);
    push(18);
    push (20);
    push (90);

   display();

    std::cout << "top element is"<< peek()<<std::endl;

    pop();
    pop();

   display();
    std::cout << "top element after popping is"<< peek()<<std::endl;
}