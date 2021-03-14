#include <iostream>

struct Linkedlistnode
{

    int val;
    Linkedlistnode* next = NULL;
};


//for creating a new node which we can insert in main

Linkedlistnode* newNode(int val){
    
    Linkedlistnode* temp = new Linkedlistnode;
    temp->val = val;
    temp->next= NULL;
    return temp;

}

//for displaying a LL
void DisplayLL(Linkedlistnode* head)
{
    while(head != NULL)
    {

        std::cout<<head->val<<" ";
        head=head->next;

    }
    std::cout<<std::endl;
}
//for finding a first node which gives a circle 
Linkedlistnode* Findcircle(Linkedlistnode* head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    
    

    // let's create fast and slow pointers 
  Linkedlistnode* Slowptr= head;
  Linkedlistnode* Fastptr= head;

//Slow will go 1 step ahead while fast will go 2 steps ahead 
Slowptr=Slowptr->next;
Fastptr=Fastptr->next->next;

//if slow=fast then break
while (Fastptr && Fastptr->next){
    if(Slowptr==Fastptr)
    break;
    Slowptr=Slowptr->next;
    Fastptr=Fastptr->next->next;
}

//if it's not circular return NULL 
if(Slowptr!=Fastptr)
return NULL;


// here is the real logic for finding out first node of circular list 
//start with slowptr on head 
//we just moved slow ptr from head 
//fast is still there so untill when fastptr and slowptr meets let's travse
Slowptr=head;
//while they 
while(Slowptr!=Fastptr){
Slowptr=Slowptr->next;
Fastptr=Fastptr->next;
}
//as soon as they meet return slowptr
return Slowptr;

}

int main(){
    Linkedlistnode* head = newNode(50);
    head->next =newNode(20);
    head->next->next =newNode(15);
    head->next->next->next=newNode(4);
    head->next->next->next->next =newNode(10);

//create a loop for testing 
    head->next->next->next->next->next = head->next->next;

Linkedlistnode* res = Findcircle(head);
    if (res == NULL)
        std::cout << "Loop does not exist";
    else
        std::cout << "Loop starting node is " << res->val;
 
    return 0;

}
