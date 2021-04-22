#include <iostream>
#include <unordered_set>


struct node
{
    int data;
    struct node* next;
};

struct node *newnode (int data)
{
    node *Node = new node;
    Node->data = data;
    Node->next = NULL;
    return Node;
}



void removedup (struct node* start)
{

    std::unordered_set<int>seen;

    struct node* current= start;
    struct node* previous= NULL;
    while(current != NULL)

    {
        if(seen.find(current->data ) != seen.end())
        {
            previous->next = current->next;
            delete(current);
        }
       else 
       {
           seen.insert(current->data);
           previous=current;
       }

       current=previous->next;

    }



}
    




void printlist (struct node* Node)    



{
    while (Node != NULL)
    {
        std::cout<<Node->data <<std::endl;
        Node= Node->next;
    }
}

int main()

{
    struct node*start = newnode(10);
    start->next = newnode(12);
    start->next->next = newnode(11);
    start->next->next->next = newnode(11);
    start->next->next->next->next = newnode(12);
    start->next->next->next->next->next = newnode(11);
    start->next->next->next->next->next->next = newnode(10);
    std::cout<<"LL before removing dups \n";
    printlist(start);

    removedup(start);


    std::cout<<"LL after removing dups \n";

    printlist(start);
}