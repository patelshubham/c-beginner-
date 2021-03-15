#include <iostream>


class LLnode
{
    public :
    int val;
    LLnode* next;

};


//for reversing linkedlist 
LLnode* reverseLL(LLnode* head , int k)

{
    if(!head)
    return NULL;
//defining current . prev , next 
    LLnode* current = head;
    LLnode* next = NULL;
    LLnode* prev = NULL;
    
    int count =0;

//reversing logic 
    while (current !=NULL && count <k)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }

//recursive call 
if(next !=NULL)
head->next=reverseLL(next, k);

// prev is now head of reversed LL

return prev ;
}



void push (LLnode** headref, int newdata )
{
    //allocate new node 
    LLnode* newnode = new LLnode();
 // new dats 
    newnode->val= newdata;
// next will point to head ref
   newnode->next = (*headref);

//moving the head to new node 
   (*headref) = newnode;


}
//display linkedlist 
void DisplayLL(LLnode* LLnode)

{
    while(LLnode !=NULL)
    {
        std::cout<< LLnode->val;

        LLnode = LLnode->next;

    }
}



int main()
{
    /* Start with the empty list */
    LLnode* head = NULL;
 
    /* Created Linked list 
       is 1->2->3->4->5->6->7->8->9 */
    push(&head, 9);
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    std::cout << "Given linked list \n";
    DisplayLL(head);
    head = reverseLL(head, 3);
 
    std::cout << "\nReversed Linked list \n";
    DisplayLL(head);
 
    return (0);
}
