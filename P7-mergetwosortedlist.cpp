// Given two sorted lists, merge them so as to produce a combined sorted list (without using extra space).

// Examples:

// Input : head1: 5->7->9
//         head2: 4->6->8 
// Output : 4->5->6->7->8->9
// Explanation: The output list is in sorted order.

// Input : head1: 1->3->5->7
//         head2: 2->4
// Output : 1->2->3->4->5->7
// Explanation: The output list is in sorted order.

#include <iostream>


struct Node {
    int data;
    struct  Node* next;
};


Node* Newnode(int key)
{
    struct Node* temp = new Node ;
    temp->data = key;
    temp->next= NULL;
    return temp;
}

void printlist (Node* node)
{
    while (node != NULL)
    {
        std::cout << node -> data <<std::endl;
        node-> next;
    }
}

Node *merge ( Node* head1 , Node* head2)
{
    if (! head1)
    return head2;
    if (! head2)
    return head1;


    if (head1->data < head2->data)

    {
        head1->next= merge(head1->next, head2);
        return head1;
    }

    else {

        head2->next = merge(head1 , head2->next);
        return head2;
    }
}



int main()

{
    Node* head1= Newnode(1);
    head1->next =Newnode(3);
    head1->next->next = Newnode(5);


    Node* head2= Newnode(0);
    head2->next = Newnode(2);
    head2->next->next = Newnode(4);

    Node* mergedhead = merge(head1, head2);

    printlist(mergedhead);

}