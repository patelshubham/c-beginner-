#include <iostream>


struct node 
{
    int data;
    struct node* next;
};


void printnnode (struct node* head, int num)

{
    struct node* primaryptr = head;
    struct node* refptr = head;

    int count =0;

    if (head != NULL)
    {
        while (count <num)
        {
            if (refptr ==NULL)
            {
            std::cout<<"\n  n is greater than all the node "<<std::endl;
            return;
            }
        

        refptr= refptr->next;
        count ++;

    }

    if (refptr == NULL)
    {

        head=head->next;

        if (head !=NULL ) 

        std::cout <<"found the n" <<num <<primaryptr->data <<std::endl ;

    }

    else
    {

        while (refptr !=NULL)
        {
        primaryptr = primaryptr -> next;
        refptr = refptr-> next;

        }
        
        std::cout <<"found the n after " <<num <<primaryptr->data <<std::endl ;
    }
}

}

void push (struct node** headref, int newdata)
{

    struct node* newnode = new node ();

    newnode->data = newdata;
    
    newnode ->next = (*headref);


    (*headref) = newnode;


}


int main()

{
    struct node* head =NULL;

    push(&head , 20);
    push(&head , 4);
    push(&head , 15);
    push(&head , 10);

    printnnode (head,4);
}               