// #include <iostream>

// class node
// {
// public:
//     int key;
//     int data;
//     node *link
//     node()
//     {
//         key = 0;
//         data = 0;
//         next = NULL;
//     }
//     node(int k, int d)
//     {
//         key = k;
//         data = d;
//     }
// };
// class singlylinkedlist
// {
// public:
//     node *head;
//     class singlylinkedlist()
//     {
//         head = NULL;
//     }
//     singlylinkedlist(node *n)
//     {
//         head = n;
//     }
//     //checking if node exists
//     node *nodeexists(int k)
//     {
//         node *temp = NULL;
//         node *ptr = head;
//         while (ptr != NULL)
//         {
//             if (ptr->key == k)
//             {
//                 temp = ptr;
//             }
//             ptr = ptr->next;
//         }
//         return temp;
//     }
//     //append a node to the list
//     void appendnode(node *n)
//     {

//         if (nodeexists(n->key) != NULL)
//         {
//             cout << "node exists with the key value" << n->key << "append another node with different key value" << endl;
//         }
//         else
//         {
//             if (head == NULL)
//             {
//                 head = n;
//                 cout << "Node Append" << endl;
//             }
//             else
//             {
//                 node *ptr = NULL;
//                 while (ptr->next = NULL)
//                 {
//                     ptr = ptr->next;
//                 }
//                 ptr->next = n;
//                 cout << "node appended" << endl;
//             }
//         }
//     }

//     //prepend node
//     void prependnode()
//     {
//         if (nodeexists(n->key) != NULL)
//         {
//             cout << "node exists with the key value" << n->key << "append another node with different key value" << endl;
//         }
//         else
//         {
//             n->next = head;
//             head = n;
//             cout << "node appended" << endl;
//         }
//     }
//     //4 insert a node after particular node of the list
//     void insertnodeafter(int k, node *n)
//     {
//         node *ptr = nodeexists(k);
//         if (ptr == NULL)
//         {
//             cout << "no node exits with key value " << k < endl;
//         }
//         else
//         {

//             if (nodeexists(n->key) != NULL)
//             {
//                 cout << "node exists with the key value" << n->key << "append another node with different key value" << endl;
//             }
//             else
//             {
//                 n->next = ptr->next;
//                 ptr->next = n;
//                 cout << "node inserted " << endl;
//             }
//         }
//     }
//     //delete node by unique key
//     void deletenodebykey(int k)
//     {
//         if (head = NULL)
//         {
//             cout << "it's empty ....can't delete" << endl;
//         }
//         else if (head = NULL)
//         {
//             if (head->key==k)
//             {
//                 head=head->next;
//                 cout << "node unlinked with key value" <<k<< endl;
//             }
//             else
//             {

//             }

//         }
//     }
// } node *head = NULL;

// int main()
// {

//     node *ptr = new node();
//     ptr->data = 2;
//     ptr->link = NULL;
// }

///Linkedlist and reverselinkedlist




#include <iostream>
using namespace std;

//creating a node : class - data and address 
class Node
{

public:
    int data;
    Node *next;
};


//to display linkedlist
void display(Node *n)
{

    while (n != NULL)  // till n is not null
    {
        cout << n->data << "-->";  //print n's data
        n = n->next;              //n to next untill it's null
    }

    cout<<endl;    // for next line
}

Node* Reverserec(Node* &head)
{

    if (head == NULL || head->next == NULL)    //base case when LL is empty
    {
        return head;
    }
    Node* newhead = Reverserec(head->next);  //recursive approach: head is at first then we are creating a newhead which will revserse head's next LL
    head->next->next=head;                   // head's next next which is basically first node =head 
    head->next = NULL;                       // first node's next = NULL which will be our last node

    return newhead;
}
int main()
{

    Node *head = NULL;
    Node *second = NULL;               //First second third 
    Node *third = NULL;

    head = new Node();
    second = new Node();              //allocating node in heap
    third = new Node();

    head->data = 1;                   //inserting data in first node 
    head->next = second;

    second->data = 2;                  //second node
    second->next = third;

    third->data = 3;                 // third node 
    third->next = NULL;

    display(head);                  //displaying LL
    Node* newhead=Reverserec(head);   //Reverse LL
    display(newhead);                 //display reverse
    return 0;
}