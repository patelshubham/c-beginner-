#include <iostream>


void binary (unsigned n)
{
    if (n>1)
    binary(n/2);
    std::cout<<""<<n%2;
}

int replacebit(int m, int n, int i, int j)

{
    int clear_mask = -1 << (j+1);
    int masking    =  (1<<i)-1;


    //now let's clear i-1 to 0 and capture them

    int captured_bits = n & masking;

    //storing i-1 to 0 bits 

    n&= clear_mask;

    //shifting m to fit into n

    m=m<<i;

    //n into m

    n|= m;

    //n into clearing_bits

    n |= captured_bits;

    return n;
}

int main(){

    //let's take inputs 
   int N=1201,M=8,i=3,j=6;
   //let's print N
   std::cout<<"N"<<"(";
   binary(N);
   std::cout<<")"
            <<"\n";
   //let's print M 
  std::cout<<"M"<<"(";
   binary(M);
   std::cout<<")"
            <<"\n";

//calling replacebit function
   N=replacebit(M,N,i,j);
   std::cout<<"after inserting M into N"<<std::endl;

//finally printing N value 
   std::cout<<"N"<<"(";
   binary(N);
   std::cout<<")"
            <<"\n";

    
}
