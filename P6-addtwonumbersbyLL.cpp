    
    
//     Input:
//   First List: 5->6->3  
//   Second List: 8->4->2 
// Output
//   Resultant list: 1->4->0->5


//requirements 
// LL , push new node , Node add two numbers , printlist 

    
    #include <iostream>
    #include <thread>
    #include <chrono>
    #include <algorithm>
    #include <stack>
    using namespace std;
    using namespace std::chrono;
    typedef long long int  ull;

//linkedlist thing 
  class Node 
  {
     public :
     int data ;
     Node* next;
  };

// this is to push new node in the list 
    void push (Node** head_ref , int new_data ) {
     
     // allocate a node 
       Node* new_node = new Node [ (sizeof(Node))];

       new_node->data = new_data;
  

  // new node next is pointing to head ref old list off the new node 
       new_node->next = (*head_ref);

// move head to point to new node 
       (*head_ref)= new_node;


    }

    Node* addtwonumlist (Node* List1 , Node* List2)

    {

        //creating a stack pushing a data into stack 
        std::stack<int>stacky1, stacky2;

        while (List1 != NULL)
        {
            stacky1.push (List1->data);
            List1= List1->next;
        }

        while (List2 != NULL)
        {
            stacky2.push (List2->data);
            List2= List2->next;
        }


        int carry = 0;

        Node* result= NULL;
        while (stacky1.empty()== false || stacky2.empty()==false )
        {
            int var1 =0 ,var2=0;

            if(stacky1.empty()==false)
            {
                var1= stacky1.top();stacky1.pop();

            }
            if(stacky2.empty()==false)
            {
                var2= stacky2.top();stacky2.pop();
                
            }

            int total = var1+var2+carry;

            Node* temp = new Node ();
            temp->data = total%10;
            carry= total/10;
            if(result==NULL)
            {
                result= temp;

            }
            else 
            {
                temp->next = result;
                result=temp;
            }
        }


     if(carry !=0)
     {
         Node* temp= new Node();
         temp->data = carry;
         temp->next= result;
         result= temp;
     }   

     return result;
    }

    
    
     
     
    void printlist(Node *node) {
    	while (node !=NULL)
        {
            std::cout<<node->data <<" ";
            node = node->next;
        }

        std::cout<<std::endl;
    }
     
    int main() {
     
    	Node *head1=NULL , *head2=NULL;

        int arr1[]= {5,6,7};
        int arr2[]= {1,8};

        int size1 = sizeof(arr1)/sizeof(arr1[0]);
       int size2 = sizeof(arr2)/sizeof(arr2[0]);

       int itr;
       for(itr=size1-1;itr>=0; itr--)
       push (&head1, arr1[itr]);

      for(itr=size2-1;itr>=0; itr--)
       push (&head2, arr2[itr]);

       Node* result = addtwonumlist(head1, head2);
       printlist(result);
    }