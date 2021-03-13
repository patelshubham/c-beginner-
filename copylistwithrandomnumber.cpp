#include <iostream>

//Definition for a Node.
class RandomListNode
{
public:
    int val;
    RandomListNode *next;
    RandomListNode *random;

    RandomListNode(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }

   RandomListNode *add(int val, RandomListNode *head){
      
      if (head==NULL){
        RandomListNode* temp = new RandomListNode (val);
        head=temp;
      }
        else{
            RandomListNode* temp = head;
            while(temp->next !=NULL)
            temp=temp->next;
            temp->next= new RandomListNode(val);
        }
        return head;
    }
};

//display function to display linkedlist
void DisplayLinkedlist(RandomListNode *head)
{


    RandomListNode *p = head;

    while(p) 

    {
        std::cout<<"data"<<p->val<<",Random="<<p->random->val<<std::endl;
        p=p->next;
    }
    std::cout<<std::endl;
}



    RandomListNode *copyRandomList(RandomListNode *head)
    {
                       // cloned list and itr1 we need 

        RandomListNode *itr1=head;                            // both are pointing to head 
          RandomListNode *itr2=head;

            if (head == NULL) 
        {
            return NULL;
        }
//step 1: creat a cloned linkedlist 


// cloned   1-n-2-n-3-n-4-null
//l1      1-n-2-n-3-n-4-null

while (itr1!= NULL)
{
    itr2 =itr1->next;

   RandomListNode *Copiedlist = new RandomListNode(itr1->val);   // let's create a new list as copied list
   // here is the circle we added 1->1->2->2 .... like mechnaism
   itr1->next=Copiedlist;                                        
   Copiedlist->next= itr2;                                   
    itr1=itr2;

    //step 1 is done here 

}
     //step2 :assign random pointers for cloned node 
//cloned    1-n-2-n-3-n-4-null
//l1      1-n-2-n-3-n-4-null
       itr1= head;

       while(itr1!=NULL)
       {
           if(itr1->random!=NULL){
           itr1->next->random=itr1->random->next;    // this is the main logic to map orginal linkedlist's pointer to cloned list pointer 
       }
     itr1=itr1->next->next;
       }

     //step 3: let's seperate cloned list and normal list
    
      itr1= head;

      RandomListNode *dummynodehead = new RandomListNode(0);
      RandomListNode *Copiedlist =dummynodehead;

         while(itr1!=NULL)
         {
             itr2= itr1->next->next;


             //handling copy --directly pointing 

             Copiedlist->next= itr1->next;

             itr1->next=itr2;
             
             Copiedlist=Copiedlist->next;
             itr1=itr2;

         }
     
     return dummynodehead->next;

     

    



};



int main()

{
    RandomListNode* head= new RandomListNode(1);
    head ->next         = new RandomListNode(2);
    head ->next->next   =  new RandomListNode(3);
    head ->next->next->next=  new RandomListNode(4);
    head ->next->next->next->next=  new RandomListNode(5);

   //let me define random order here 
    head->random = head->next->next;

   // second random
    head->next->random=head;
    // 3's and 4's random points to 5 
    head->next->next->random = 
                    head->next->next->next->next; 
    head->next->next->next->random = 
                    head->next->next->next->next; 
  
    // 5's random points to 2 
    head->next->next->next->next->random = 
                                      head->next; 

    std::cout << "Original list : \n"; 
    DisplayLinkedlist(head); 
  
    std::cout << "\nCloned list : \n"; 
    RandomListNode *cloned_list = copyRandomList(head); 
    DisplayLinkedlist(cloned_list);                                   

   
};
