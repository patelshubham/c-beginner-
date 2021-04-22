//Design a stack that supports getMin() in O(1) time and O(1) extra space
// assume we have stack 
// when element is insert we will store min element as 2x- min 
//X is the value 

//requirements
//need stack , minele variable , result variable 
//fucntions : getmin , peek top of the stack , pop , push 

#include <iostream>
#include <stack>


struct mystack
{
    std::stack<int> stacky;
    int minele;

    void getmin()
    {
        //base condition  
        if (stacky.empty())
        std::cout<<"stack is empty ";

        else 
         std::cout<<"minimum element of stack  ";<<minele <<std::endl;

    }


    void peek()
    {
       if (stacky.empty())
       {
       std::cout<<"stack is empty ";
       return;
       }
    

    int topele = stacky.top();
    std::cout<<"top element of the stack is";

    (topele<minele) ? std::cout <<minele:std::cout<<topele;


}


void pop()

{
    if (stacky.empty())
    {
        std::cout<<"stack is empty";
        return;
    }

    std::cout<<"top element removed ";

    int topele= stacky.top();
    stacky.pop();


    if (topele<minele)
    {
        std::cout <<minele<< "\n";
        minele = 2*minele - topele;

    }

    else
      
    std::cout<<topele<<"\n";
}


void push(int x)
{
    
    if (stacky.empty())
    {


        minele= x;
        stack.push(x);
        std::cout<<"number inserted ";
        return;
    }
   
   

    
}
